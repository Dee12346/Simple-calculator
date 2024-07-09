#include<iostream>
#include<limits>

void displayMenu(){
    std::cout <<"simple calculator\n";
    std::cout <<"select an operation:\n";
    std::cout <<"1. Addition (+)\n";
    std::cout <<"2. subtraction (-)\n";
    std::cout <<"3. multiplication (*)\n";
    std::cout <<"4. Division (/)\n";
    std::cout <<"5. Exit\n";
}
double getNumber(){
    double num;
    while (!(std::cin >> num)) {
        std::cin.clear(); //clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n')
;        std::cout <<"Invalid input. please enter a number: ";
 }
 return num;

}
int main(){
    int choice;
    double num1,num2,result;
    while (true){
        displayMenu();
        std::cout <<"Enter your choice: ";
        std::cin >> choice;
        if (choice == 5) {
            std::cout <<"Exiting the calculator.Goodbye!\n";
            break;
        }
        if (choice <1|| choice >5) {
            std::cout <<"Invalid choice.please try again.\n";
            continue;
        }
        std::cout <<"enter first number: ";
        num1 = getNumber();
        std::cout << "Enter second number:";
        num2 = getNumber();
        switch(choice){
            case 1:
            result = num1 + num2;
            
            std::cout << "Result:"<<num1 <<" + "<< num2 <<" = "<<result << std::endl;
            break;
            case 2:
            result = num1 - num2;
                std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
                break;
            case 3:
                result = num1 * num2;
                std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
                } else {
                    std::cout << "Error: Division by zero is not allowed.\n";
                }
                break;
        }

        std::cout << std::endl;
    }

    return 0;
}
