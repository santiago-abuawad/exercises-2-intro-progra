
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void exercise_1(string s1) {

if(s1.empty()){
  cout << "0\n";
} else {

int long_text = s1.length();
int ultimo_caracter = 0; //depues se modifica
// bucle para iterar sobre cada caracter

for (int i = 0; i < long_text; ++i) {
  if(s1[i] == ' '){
    cout << i << "\n";

  }
  ultimo_caracter = i;
}

    cout << ultimo_caracter + 1 << "\n";
}
}

void exercise_2(string s1) {
  string palabra;
        if (s1.empty()) {
      cout << "";
      } else {

  for(char x : s1) {
    if(x != ' ') {
      palabra += x;
    }else {
      cout << "[" << palabra << "]" << endl;
      palabra = "";
    }
  }
      cout << "[" << palabra << "]" << endl;
      }
}

void exercise_3(string s1) {
  int contador = 0;
  int index  = 0;
  while (index < s1.length() && contador < 10) {
    char c = s1[index];
    if(c == '1') {
                 cout << "Om-nom-nom :P\n";
                 contador++;
    }
    else if(c == '0') {
                 cout << "Sin pastel :(\n";
                 break;
    }
  }
  index++;
}

void exercise_4(int n) {
  if(n < 0){
    cout << "El numero es negativo. Intentelo de nuevo\n";
  } else {
  if(n > 14) {
    cout << "El numero es muy grande. Intentelo de nuevo\n";
  }
  int resultado = 1;
  for(int i = 2; i <= n; ++i) {
    resultado *= i;
  }
  cout << resultado << "\n";
  }
}

void exercise_5(int n, int k) {
  
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}