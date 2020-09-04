#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

void read_temperatures(double temperatures[], int length);
int low = 0;
int mid = 0;
int high = 0;

int main()
{
  bool check = true;
  while (check)
  {
    char response;
    int num;
    cout << "Do you wish to write your own data? Y/N: ";
    cin >> response;
    if (response == 'Y' || response == 'y')
    {
      cout << "Write 5 temperatures.\n";
      for (int i = 1; i < 6; i++)
      {
        cout << "Write temperature nr. " << i << ": ";
        cin >> num;
        if (num < 10)
        {
          low++;
        }
        else if (num >= 10 && num <= 20)
        {
          mid++;
        }
        else
        {
          high++;
        }
      }
      cout << "Amount of degrees under 10: " << low << endl;
      cout << "Amount of degrees between 10 and 20: " << mid << endl;
      cout << "Amount of degrees over 20: " << high << endl;
      check = false;
    }
    else if (response == 'N' || response == 'n')
    {
      const char filename[] = "temp.dat";
      ifstream file;       // definerer filvariabel
      file.open(filename); // åpner filen
      if (!file)
      { // innfil kan brukes som et logisk uttrykk
        cout << "Feil ved åpning av innfil." << endl;
        exit(EXIT_FAILURE); // uthopp fra programmet
      }
      double temperatures[5];
      int counter = 0;
      while (file >> num)
      { // leser fram til filslutt
        temperatures[counter] = num;
        counter++;
      }

      read_temperatures(temperatures, sizeof(temperatures) / sizeof(temperatures[0]));
      file.close();
      check = false;
    }
    else
    {
      cout << "Please try again.\n";
    }
  }
}

void read_temperatures(double temperatures[], int length)
{
  for (int i = 0; i < length; i++)
  {
    if (temperatures[i] < 10)
    {
      low++;
    }
    else if (temperatures[i] >= 10 && temperatures[i] <= 20)
    {
      mid++;
    }
    else
    {
      high++;
    }
  }
  cout << "Amount of degrees under 10: " << low << endl;
  cout << "Amount of degrees between 10 and 20: " << mid << endl;
  cout << "Amount of degrees over 20: " << high << endl;
}
