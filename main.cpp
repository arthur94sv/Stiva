#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;

void push(int x) {
   if(top>=n-1)
      cout<<"Stiva plina"<<endl;
   else {
      top++;
      stack[top]=x;
   }
}
void pop() {
   if(top<=-1)
      cout<<"Stiva goala"<<endl;
   else {
      cout<<"Valoarea este: "<< stack[top] <<endl;
      top--;
   }
}
void afisare() {
   if(top>=0) {
      cout<<"Valorile stivei sunt:";
      for(int i=top; i>=0; i--)
         cout<<stack[i]<<" ";
         cout<<endl;
   } else
      cout<<"Stiva goala";
}
int main() {
   int varianta, val;
   cout<<"1) Adaugat elemente in stiva"<<endl;
   cout<<"2) Scos elemente din stiva"<<endl;
   cout<<"3) Afisare elemente din stiva"<<endl;

   do {
      cout<<"Ce doriti sa faceti (1, 2 sau 3): "<<endl;
      cin>>varianta;
      switch(varianta) {
         case 1: {
            cout<<"Scrieti valoarea ce va fi introdusa in stiva: ";
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            afisare();
            break;
         }

      }
   }while(varianta=!3);
      return 0;
}
