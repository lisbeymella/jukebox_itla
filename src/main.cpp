#include <iostream>
#include "Reproduccion.h"
#include <stdio.h>
using namespace std;

//TODO: Implement this code from the scratch
int main()
{
  Reproduction* list = new Reproduction();
  Reproduction:: Start head;
  head=list->createNodo();
  int entry1;
  cin>>entry1;
  list->add(head,entry1);
     int entry2;
  cin>>entry2;
  lista->add(head,entry2);
     int entry3;
  cin>>entry3;
  lista->add(head,entry3);
     /*int entry4;
  cin>>entry4;
    cout<<list->remove(head,entry3);*/
  list->list(head);


}


int main() {
	cout << "Implement your code" << endl;
	return 0;
}
