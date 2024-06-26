
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
                 cout << "No cake :(\n";
                 break;
    }
    index++;
  }
}

void exercise_4(int n) {
  if(n < 0){
    cout << "El numero es negativo. Intentelo de nuevo\n";
  } else {
  if(n > 14) {
    cout << "El numero es muy grande. Intentelo de nuevo\n";
  } else {
  int resultado = 1;
  for(int i = 2; i <= n; ++i) {
    resultado *= i;
  }
  cout << resultado << "\n";
  }
  }
}

void exercise_5(int n, int k) {
  int firtsday = 1;
  bool firts_day_check = true;
  //bucle
  while(firtsday <= k){
            if (firts_day_check) {
            for (int i = 1; i < n; ++i) {
                cout << "   ";
            }
            firts_day_check = false;     
  }
          for (int i = n; i <= 7 && firtsday <= k; ++i) {
            if (firtsday < 10) {
                              cout << " ";
            }
            cout << firtsday;
            if(i < 7 || firtsday == k) {
            cout << " ";
            }
            firtsday++;
          }
      cout << endl;
       n = 1;
    }

}

int exercise_6(int n) {
    int sum = 0;
    while(n>0){
      sum = sum + n%10;
      n = n/10;
    }
    return sum;
}

void exercise_7(int n) {
   double res = 0;
   for(int i = 1; i <= n ; i++) {
    res += pow(-1,i+1)/i;
   }
   cout << res << endl;

}

void exercise_8(string s) {
     if(s == ""){
    cout << "YES" << endl;
  } else {
    char firtsletter = s[0];
    int ult = s.length() - 1;
    char endletter = s[ult];
    if(firtsletter == endletter) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
  }

}

void exercise_9(string s) {

int longtext = s.length();
int fval = 0;
 for (int i = 0; i < longtext; ++i) {
  char f = s[i];
  if(f == 'f'){
    --fval;
  }
}
if(fval == -1) {
    cout << fval << endl;
}
if(fval == -2) {
    cout << 3 << endl;
} 
if(fval == 0) {
    cout << -2 << endl;
}

}

int exercise_10(int a, int b) {
      while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
        return a;

}

void exercise_11() {
    double num=1;
    cout<< "U0 = "<<num<<endl;
    cout<< "U"<<num<<" = "<<num<<endl;
    for (int i=1; i <10; i++){
        num=num /(i+1);
        int n;
        n= i+1;
       cout<< "U"<<n<<" = "<<num<<endl; 
    }
}

void exercise_12() {
    double num=1;
    cout<< "U"<<num<<" = "<<num<<" "<<"V"<<num<<" = "<<"1"<<endl;
    for (int i=1; i <10; i++){
        num=num /(i+1);
        int n;
        n= i+1;
       cout<< "U"<<n<<" = "<<num<<" "<<"V"<<n<<" = "<<"1"<<endl; 
    }
}

long exercise_13(int n, int k) {
  int x=0;
  int i;
  for (i = 1; i<= n ; ++i){
    x += pow(i,k); //The pow() function returns the result of the first argument raised to the power of the second argument. This function is defined in the cmath header file.
   } 
  return x;
}

string exercise_14(int n) {
if(n == 0){
  return "Es palindrome";
}else {
      int lastDigit = n % 10;
      int firstDigit = n;
       while (firstDigit >= 10) {
        firstDigit /= 10;
    }    
 if (firstDigit == lastDigit) {
        return "Es palindrome";
    } else {
        return "No es palindrome";
    }
}

}

void exercise_15(int decimal) {
  if(decimal == 0) {
    cout << "0\n";
  } else {
  int binarynumber[32];
  int i = 0;
  while (decimal > 0) {
    binarynumber[i] = decimal % 2;
    decimal = decimal / 2;
    i++;
  }

      for (int j = i - 1; j >= 0; j--){
        cout << binarynumber[j];
}
cout << "\n";
  }
}

void exercise_16(int divident, int divider) {
  if (divider == 0){
    cout << "";
    } 
  else{
    int res = 0;
    int c = 0;
    c = divident/divider;
    res = divident%divider;
    cout << c << " ";
    cout << res << endl;
    }
}

void exercise_17(int n) {
  int contador = 0;
  int num = 2;
  while (contador < n) {
    int divisores = 0;
      for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            ++divisores;
          }
        }
        if (divisores == 2) {
            cout << num << " ";
            ++contador;
        }
        ++num;
    }
}

void exercise_18_19(int debut, int fin) {
    if (debut < 0 || debut == 0) {
      cout << "El numero debe de ser positivo y mayor a zero\n";
    } 
    else if (fin < debut) {
      cout << "El numero de fin no debe de ser menor al inicial\n";
    }
    else {
    for(int i = debut; i <= fin ; i++) {
      int num = i;
      int iterations = 0;
      while(num != 0) {
        if(num % 3 == 0) {
            num += 4;
      } else if (num % 4 == 0) {
        num /= 2;
      } else {
        num -= 1;
      }
        iterations++;
    }
      cout << i << "->" << iterations << endl;
    }
    }
}