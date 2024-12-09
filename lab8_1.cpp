#include <iostream>
#include<string>
using namespace std;

int main()
{
  string rank;
  cout << "Input your rank: ";
  cin >> rank;
  string S = "You have received Super Ultra Rare Unit!!!\n";
  string A = "You have received 5 gems.\n";
  string B = "You have received 1 gems.\n";
  string C = "You have received 2000 coins.\n";
  string D = "You have received very KAK items.\n";
  if (rank == "S"){
      cout << S << A << B << C << D;
  } if (rank == "A"){
      cout << A << B << C << D;
  } if (rank == "B"){
      cout << B << C << D;
  }  if (rank == "C"){
      cout << C << D;
  } if (rank == "D"){
      cout << D; }
      
  return 0;
}