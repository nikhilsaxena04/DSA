#include<iostream>
using namespace std;

struct Process {
  int ID;
  int AT;
  int BT;
  int CT;
  int TAT;  // fixed typo here
  int WT;
};

int main() {
  int n = 3;
  Process p[n] = {
    {1, 0, 2},
    {2, 0, 5},
    {3, 0, 3}
  };

  int current_time = 0; 
  float total_TAT = 0, total_WT = 0;

  for (int i = 0; i < n; i++) {
    if (current_time < p[i].AT) {
      current_time = p[i].AT;
    }

    p[i].CT = current_time + p[i].BT;
    p[i].TAT = p[i].CT - p[i].AT;
    p[i].WT = p[i].TAT - p[i].BT;

    total_TAT += p[i].TAT;
    total_WT += p[i].WT;

    current_time = p[i].CT;
  }

  cout << "P\tAT\tBT\tCT\tTAT\tWT\n";
  for (int i = 0; i < n; i++) {
    cout << "P" << p[i].ID << "\t"
         << p[i].AT << "\t"
         << p[i].BT << "\t"
         << p[i].CT << "\t"
         << p[i].TAT << "\t"
         << p[i].WT << "\n";
  }

  // Display averages
  float avgTAT = total_TAT / n;
  float avgWT = total_WT / n;

  cout << "\nAverage Turnaround Time = " << avgTAT << endl;
  cout << "Average Waiting Time = " << avgWT << endl;

  return 0;
}
