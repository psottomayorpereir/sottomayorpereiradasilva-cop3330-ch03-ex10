#include "std_lib_facilities.h"	

int main()
try{
    //declare variables here
	string operation;
	double val1 = 0;
	double val2 = 0;
    //print the message to get input
	cout << "Enter an operation (+, -, *, /, plus, minus, mul, div) followed by two floating-point values separated by a space: ";
	//get input and do the operation accordingly
	while(cin >> operation >> val1 >> val2) {
        //variable to get result
		double res = 0;
		if (operation=="plus" || operation=="+") {
            //add values
            res = val1+val2;
        }
		else if (operation=="minus" || operation=="-"){
            //subtract values
            res = val1-val2;
        }
		else if (operation=="mul" || operation=="*"){
            //multiply values
            res = val1*val2;
        }
		else if (operation=="div" || operation=="/") {
            //divide values
			if (val2==0){
                //if val2==0, it means that the user is trying to divide by zero
                //display error message
                error("you are trying to divide by zero! this is not allowed in math");
            }
			res = val1/val2;
		}
		else{
            //operator entered is not allowed
            //display error message
            error("bad operator: ", operation);
        }
        //print result
		cout << val1 << operation << val2 << " = " << res <<'\n';
        //try again
		cout << "Try again: ";
	}
    //bad input, so exit
	cout << "Bad input. Exiting...\n";
	keep_window_open("~");
}
catch (runtime_error e) {
    //error message
	cout << e.what() << '\n';
	keep_window_open("~");
}