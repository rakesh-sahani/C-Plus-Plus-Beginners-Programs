#include <iostream>
    #include <fstream>
    #include <cstdlib>
    #include <cstring>
    using namespace std;

    int main()
    {
        fstream infile("grades.txt",ios::in);
        if(!infile){cerr<<"file could not be found!";exit(1);}

        fstream outfile("average.txt",ios::out);
        if(!outfile){cerr<<"file could not be created!";exit(1);}


        char fname[20];
        char lname[20];
        int grades;
        char c;
        int lines=1;
        double avg=0;

        while(infile.get(c))
        {if(c=='\n') lines++;}
        infile.clear();
        infile.seekg(0);

        for(int k=0;k<lines;k++)
            {
                infile>>fname;
                infile>>lname;
                outfile<<fname<<" "<<lname<<" ";
                int sum=0;
                for(int i=0;i<10;i++)
                {
                    if(infile>>grades)
                    {sum+=grades;
                    outfile<<grades<<" ";}
                }

                outfile<<(double)sum/10.0<<endl;
            }


        system("pause");
        return 0;
    }