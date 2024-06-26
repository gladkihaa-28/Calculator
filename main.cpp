#include <QApplication>
#include <QDialog>
#include "calc_ui.h"
#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <cctype>
#include <sstream>

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

double applyOp(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0;
}

double evaluate(const std::string& expression) {
    std::stack<double> values;
    std::stack<char> ops;

    for (size_t i = 0; i < expression.length(); i++) {
        if (isspace(expression[i])) continue;

        if (isdigit(expression[i]) || expression[i] == '.') {
            std::stringstream ss;
            while (i < expression.length() && (isdigit(expression[i]) || expression[i] == '.')) {
                ss << expression[i];
                i++;
            }
            double val;
            ss >> val;
            values.push(val);
            i--;
        } else if (expression[i] == '(') {
            ops.push(expression[i]);
        } else if (expression[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                double val2 = values.top(); values.pop();
                double val1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            ops.pop();
        } else if (expression[i] == '+' || expression[i] == '-' ||
                   expression[i] == '*' || expression[i] == '/') {
            while (!ops.empty() && precedence(ops.top()) >= precedence(expression[i])) {
                double val2 = values.top(); values.pop();
                double val1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            ops.push(expression[i]);
        }
    }

    while (!ops.empty()) {
        double val2 = values.top(); values.pop();
        double val1 = values.top(); values.pop();
        char op = ops.top(); ops.pop();
        values.push(applyOp(val1, val2, op));
    }

    return values.top();
}


class CalculatorApp : public QDialog {
Q_OBJECT

public:
    CalculatorApp(QWidget *parent = nullptr) : QDialog(parent) {
        ui.setupUi(this);
        connect(ui.button_0, &QPushButton::clicked, this, &CalculatorApp::btn_0);
        connect(ui.button_1, &QPushButton::clicked, this, &CalculatorApp::btn_1);
        connect(ui.button_2, &QPushButton::clicked, this, &CalculatorApp::btn_2);
        connect(ui.button_3, &QPushButton::clicked, this, &CalculatorApp::btn_3);
        connect(ui.button_4, &QPushButton::clicked, this, &CalculatorApp::btn_4);
        connect(ui.button_5, &QPushButton::clicked, this, &CalculatorApp::btn_5);
        connect(ui.button_6, &QPushButton::clicked, this, &CalculatorApp::btn_6);
        connect(ui.button_7, &QPushButton::clicked, this, &CalculatorApp::btn_7);
        connect(ui.button_8, &QPushButton::clicked, this, &CalculatorApp::btn_8);
        connect(ui.button_9, &QPushButton::clicked, this, &CalculatorApp::btn_9);

        connect(ui.button_plus, &QPushButton::clicked, this, &CalculatorApp::btn_plus);
        connect(ui.button_min, &QPushButton::clicked, this, &CalculatorApp::btn_min);
        connect(ui.button_mul, &QPushButton::clicked, this, &CalculatorApp::btn_mul);
        connect(ui.button_div, &QPushButton::clicked, this, &CalculatorApp::btn_div);

        connect(ui.button_c, &QPushButton::clicked, this, &CalculatorApp::btn_c);
        connect(ui.button_lp, &QPushButton::clicked, this, &CalculatorApp::btn_lp);
        connect(ui.button_rp, &QPushButton::clicked, this, &CalculatorApp::btn_rp);
        connect(ui.button_point, &QPushButton::clicked, this, &CalculatorApp::btn_point);

        connect(ui.button_ass, &QPushButton::clicked, this, &CalculatorApp::btn_ass);
    }

private:
    Ui::Calculator ui;
    std::string problem;

    void btn_0() { problem += "0"; ui.textEdit->setText(ui.textEdit->toPlainText() + "0"); }
    void btn_1() { problem += "1"; ui.textEdit->setText(ui.textEdit->toPlainText() + "1"); }
    void btn_2() { problem += "2"; ui.textEdit->setText(ui.textEdit->toPlainText() + "2"); }
    void btn_3() { problem += "3"; ui.textEdit->setText(ui.textEdit->toPlainText() + "3"); }
    void btn_4() { problem += "4"; ui.textEdit->setText(ui.textEdit->toPlainText() + "4"); }
    void btn_5() { problem += "5"; ui.textEdit->setText(ui.textEdit->toPlainText() + "5"); }
    void btn_6() { problem += "6"; ui.textEdit->setText(ui.textEdit->toPlainText() + "6"); }
    void btn_7() { problem += "7"; ui.textEdit->setText(ui.textEdit->toPlainText() + "7"); }
    void btn_8() { problem += "8"; ui.textEdit->setText(ui.textEdit->toPlainText() + "8"); }
    void btn_9() { problem += "9"; ui.textEdit->setText(ui.textEdit->toPlainText() + "9"); }

    void btn_plus() { problem += "+"; ui.textEdit->setText(ui.textEdit->toPlainText() + "+"); }
    void btn_min() { problem += "-"; ui.textEdit->setText(ui.textEdit->toPlainText() + "-"); }
    void btn_mul() { problem += "*"; ui.textEdit->setText(ui.textEdit->toPlainText() + "*"); }
    void btn_div() { problem += "/"; ui.textEdit->setText(ui.textEdit->toPlainText() + "/"); }

    void btn_c() { ui.textEdit->clear(); }
    void btn_lp() { problem += "("; ui.textEdit->setText(ui.textEdit->toPlainText() + "("); }
    void btn_rp() { problem += ")"; ui.textEdit->setText(ui.textEdit->toPlainText() + ")"); }
    void btn_point() { problem += "."; ui.textEdit->setText(ui.textEdit->toPlainText() + "."); }


    void btn_ass() {
        std::string result = std::to_string(evaluate(ui.textEdit->toPlainText().toStdString()));
        ui.textEdit->setText(QString::fromStdString(result));
    }
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    CalculatorApp calculator;
    calculator.show();
    return app.exec();
}

#include "main.moc"