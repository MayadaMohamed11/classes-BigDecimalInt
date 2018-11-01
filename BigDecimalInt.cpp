#include <iostream>
#include "BigDecimalInt.h"

using namespace std;
BigDecimalInt::BigDecimalInt()
{
   num="";
}
BigDecimalInt :: BigDecimalInt(string n)
{
        num=n;

}

    BigDecimalInt BigDecimalInt :: operator+ (BigDecimalInt num2)
    {
        int arr1[num.size()+1];
        int arr2[num.size()];
        int arr3[num2.num.size()+1];
        int arr4[num2.num.size()];

        if(int(num[0])==45){
            for(int i=0; i<=(num.size()); i++)
        {
            arr1[0]=45;
            arr1[1]=0;
            arr1[i+2]=num[i+1]-48;
        }
        for(int i=(num.size()); i>-1; i--)
        {
            if(i==num.size())
            {
                arr2[i]=10-arr1[i];
            }
            else{
                if(i==0){
                  arr2[i]=45;
                }
                else{
                    arr2[i]=9-arr1[i];
                    while(arr2[i]==10)
                    {
                        arr2[i]-=10;
                        arr2[i-1]=10-arr1[i-1];
                        i--;
                    }
                }
            }
        }
        }
        else{
           for(int i=0; i<=(num.size()+1); i++)
        {
            arr1[0]=43;
            arr1[1]=0;
            arr1[i+2]=num[i]-48;
        }
        for(int i=(num.size()+1); i>-1; i--)
        {
            if(i==num.size()+1)
            {
                arr2[i]=10-arr1[i];
            }
            else{
                if(i==0){
                  arr2[i]=45;
                }
                else{
                    arr2[i]=9-arr1[i];
                    while(arr2[i]==10)
                    {
                        arr2[i]-=10;
                        arr2[i-1]=10-arr1[i-1];
                        i--;
                    }
                }
            }
        }
        }
        if(int(num2.num[0])==45){
        for(int i=0; i<=(num2.num.size()); i++)
        {
            arr3[0]=43;
            arr3[1]=0;
            arr3[i+2]=num2.num[i+1]-48;
        }
        for(int i=(num2.num.size()); i>-1; i--)
        {
            if(i==num2.num.size())
            {
                arr4[i]=10-arr3[i];
            }
            else{
                if(i==0){
                  arr4[i]=45;
                }
                else{
                    arr4[i]=9-arr3[i];
                    while(arr4[i]==10)
                    {
                    arr4[i]-=10;
                    arr4[i-1]=10-arr3[i-1];
                    i--;
                    }
                }
            }
        }
        }
        else{
         for(int i=0; i<=(num2.num.size()+1); i++)
         {
            arr3[0]=43;
            arr3[1]=0;
            arr3[i+2]=num2.num[i]-48;
         }
          for(int i=(num2.num.size()+1); i>-1; i--)
        {
            if(i==num2.num.size()+1)
            {
                arr4[i]=10-arr3[i];
            }
            else{
                if(i==0){
                  arr4[i]=45;
                }
                else{
                    arr4[i]=9-arr3[i];
                    while(arr4[i]==10)
                    {
                    arr4[i]-=10;
                    arr4[i-1]=10-arr3[i-1];
                    i--;
                    }
                }
            }
        }

        }
        BigDecimalInt num3;
        if(((int(num[0])!=45)&&(int(num2.num[0])!=45)))
        {
            int arr5[num.size()];
            if(num.size()==num2.num.size())
            {

                for(int i =  num.size()+1; i >0 ; i-- )
                {

                    arr5[i]=arr1[i]+arr3[i];
                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr1[i-1]+=1;

                    }
                }
                for(int i = 0; i <=num.size() ; i++){
                        if(i==0){
                            num3.num='+';
                        }
                    else{
                    if(char(arr5[i])+'0'=='0'){
                        i++;
                    }
                    num3.num+=char(arr5[i])+'0';
                    }
                }
            }

            else if((num.size())>num2.num.size())
            {
                int arr5[num.size()+1];
                int arr6[num.size()+1];
                for(int i=1; i<=((num.size())-num2.num.size()); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num.size())-num2.num.size())+1; i<=(num.size()+1); i++)
                {
                    arr6[i]=arr3[i-(((num.size())-num2.num.size()))];

                }

                for(int i =  num.size()+1; i >0 ; i-- )
                {
                    arr5[i]=arr1[i]+arr6[i];
                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr1[i-1]+=1;
                    }

                }
                int j=0;
                 for(int i = 0; i <=num.size()+1 ; i++){
                    if(i==0){
                            num3.num='+';
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }

                    }
                 }
            }

            else
            {
                int arr5[num2.num.size()+1];
                int arr6[num2.num.size()+1];
                for(int i=1; i<=((num2.num.size())-num.size()); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num2.num.size())-num.size())+1; i<=(num2.num.size()+1); i++)
                {
                    arr6[i]=arr1[i-((num2.num.size())-num.size())];
                }
                for(int i =  num2.num.size()+1; i >0 ; i-- )
                {
                    arr5[i]=arr6[i]+arr3[i];
                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr6[i-1]+=1;
                    }
                }
                int j=0;
                 for(int i = 0; i <=num2.num.size()+1 ; i++){
                    if(i==0){
                            num3.num='+';
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
            }
        }
        else if(int (num[0])!=45&&(int(num2.num[0])==45))
        {
            int arr5[num.size()+1];
            int counter=0;
            if((num.size())==num2.num.size()-1)
            {
                for(int i =  num.size()+1; i >-1 ; i-- )
                {
                    arr5[i]=arr1[i]+arr4[i];

                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr1[i-1]+=1;

                    }
                    if(i==0)
                    {
                        if(arr5[i+1]==9)
                        {
                            counter=1;
                            arr5[i]=45;
                        }
                        else
                            arr5[i]=43;

                    }

                }
                if(counter==1)
                {
                    int arr7[num.size()];
                    for(int i =  0; i <=num.size()+1 ; i++ )
                    {
                        arr7[i]=arr5[i];

                    }
                    for(int i =  num.size()+1; i >0 ; i-- )
                    {
                        if(i==num.size()+1)
                        {
                            arr5[i+1]=-10;
                            arr5[i]=10-arr7[i];
                        }
                        else
                        arr5[i]=9-arr7[i];
                        if(arr5[i]==10)
                        {
                            arr5[i]-=10;
                            arr5[i-1]=10-arr7[i-1];
                            i--;
                        }
                    }

                }
                int j=0;
                 for(int i = 0; i <=num.size()+1 ; i++){
                    if(i==0){
                            num3.num=char(arr5[i]);
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
                if(j==0){
                    num3.num="0";
                }

            }
            else if((num.size())>(num2.num.size()-1))
            {
                int arr6[num.size()+1];
                int arr5[num.size()+1];
                int counter=0;
                for(int i=1; i<=((num.size())-(num2.num.size()-1)); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num.size())-(num2.num.size()-1))+1; i<=(num.size()+1); i++)
                {
                    arr6[i]=arr4[i-((num.size())-(num2.num.size()-1))];
                }
                for(int i =  num.size()+1; i >-1 ; i-- )
                {
                    if(i==num.size()+1)
                    {
                        arr5[i+1]=-10;
                    }
                    arr5[i]=arr1[i]+arr6[i];

                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr1[i-1]+=1;

                    }


                    if(i==0)
                    {
                        if(arr5[i+1]==0)
                        {
                            counter=1;
                            arr5[i]=45;
                        }
                        else
                           arr5[i]=43;
                    }

                }


                if(counter==1)
                {
                    int arr7[num.size()+1];
                    for(int i =  0; i <=num.size()+1 ; i++ )
                    {
                        arr7[i]=arr5[i];

                    }

                    for(int i =  num.size()+1; i >0 ; i-- )
                    {
                        if(i==num.size()+1)
                        {
                            arr5[i+1]=-10;
                            arr5[i]=10-arr7[i];
                        }

                        else
                        {
                            arr5[i]=9-arr7[i];
                        }
                        while (arr5[i]==10)
                        {
                            arr5[i]-=10;
                            arr5[i-1]=10-arr7[i-1];
                            i--;
                        }
                    }
                }
                int j=0;
                 for(int i = 0; i <=num.size()+1 ; i++){
                    if(i==0){
                            num3.num=char(arr5[i]);
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
            }

            else
            {
                int arr6[num2.num.size()];
                int arr5[num2.num.size()];
                for(int i=1; i<=((num2.num.size())-(num.size())); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num2.num.size())-(num.size()))+1; i<=(num2.num.size()); i++)
                {
                    arr6[i]=arr1[i-(((num2.num.size())-(num.size())))+1];
                }
                for(int i =  num2.num.size(); i >-1 ; i-- )
                {
                    arr5[i]=arr6[i]+arr4[i];

                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr6[i-1]+=1;

                    }
                    if(i==0)
                    {
                        if(arr5[i+1]==9)
                        {
                            counter=1;
                            arr5[i]=45;
                        }
                        else
                        arr5[i]=43;
                    }
                }
                if(counter==1)
                {
                    int arr7[num2.num.size()];
                    for(int i =  0; i <=num2.num.size() ; i++ )
                    {
                        arr7[i]=arr5[i];
                    }
                    cout<<endl;
                    for(int i =  num2.num.size(); i >0 ; i-- )
                    {
                        if(i==num2.num.size())
                        {
                            arr5[i+1]=-10;
                            arr5[i]=10-arr7[i];
                        }

                        else
                        arr5[i]=9-arr7[i];
                        while(arr5[i]==10)
                        {
                            arr5[i]-=10;
                            arr5[i-1]=10-arr7[i-1];
                            i--;
                        }

                    }

                }
               int j=0;
                 for(int i = 0; i <=num2.num.size() ; i++){
                    if(i==0){
                            num3.num=char(arr5[i]);
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
            }
        }

        else if(int (num[0])==45&&(int(num2.num[0])!=45))
{
            int arr5[num2.num.size()+1];
            int counter=0;
            if((num.size()-1)==num2.num.size())
            {
                for(int i =  num2.num.size()+1; i >-1 ; i-- )
                {
                    arr5[i]=arr2[i]+arr3[i];

                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr2[i-1]+=1;

                    }
                    if(i==0)
                    {
                        if(arr5[i+1]==9)
                        {
                            counter=1;
                            arr5[i]=45;
                        }
                        else
                            arr5[i]=43;

                    }


                }
                if(counter==1)
                {
                    int arr7[num.size()];
                    for(int i =  0; i <=num2.num.size()+1 ; i++ )
                    {
                        arr7[i]=arr5[i];

                    }
                    for(int i =  num2.num.size()+1; i >0 ; i-- )
                    {
                        if(i==num2.num.size()+1)
                        {
                            arr5[i+1]=-10;
                            arr5[i]=10-arr7[i];
                        }
                        else
                        arr5[i]=9-arr7[i];
                        if(arr5[i]==10)
                        {
                            arr5[i]-=10;
                            arr5[i-1]=10-arr7[i-1];
                            i--;
                        }
                    }

                }
                int j=0;
                 for(int i = 0; i <=num2.num.size()+1 ; i++){
                    if(i==0){
                            num3.num=char(arr5[i]);
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
                if(j==0){
                    num3.num="0";
                }

            }
            else if((num.size()-1)>(num2.num.size()))
            {
                int arr6[num.size()];
                int arr5[num.size()];
                int counter=0;
                for(int i=1; i<=((num.size()-1)-(num2.num.size())); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num.size()-1)-(num2.num.size()))+1; i<=(num.size()); i++)
                {
                    arr6[i]=arr3[i-((num.size()-1)-(num2.num.size()))];
                }
                for(int i =  num.size(); i >-1 ; i-- )
                {
                    if(i==num.size())
                    {
                        arr5[i+1]=-10;
                    }
                    arr5[i]=arr2[i]+arr6[i];

                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr2[i-1]+=1;

                    }


                    if(i==0)
                    {
                        if(arr5[i+1]==9)
                        {
                            counter=1;
                            arr5[i]=45;
                        }
                        else
                           arr5[i]=43;
                    }
                }


                if(counter==1)
                {
                    int arr7[num.size()];
                    for(int i =  0; i <=num.size() ; i++ )
                    {
                        arr7[i]=arr5[i];

                    }

                    for(int i =  num.size(); i >0 ; i-- )
                    {
                        if(i==num.size())
                        {
                            arr5[i+1]=-10;
                            arr5[i]=10-arr7[i];
                        }

                        else
                        {
                            arr5[i]=9-arr7[i];
                        }
                        while (arr5[i]==10)
                        {
                            arr5[i]-=10;
                            arr5[i-1]=10-arr7[i-1];
                            i--;
                        }
                    }
                }
                int j=0;
                 for(int i = 0; i <=num.size() ; i++){
                    if(i==0){
                            num3.num=char(arr5[i]);
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
            }

            else
            {
                int arr6[num2.num.size()+1];
                int arr5[num2.num.size()+1];
                for(int i=1; i<=((num2.num.size())-(num.size()-1)); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num2.num.size())-(num.size()-1))+1; i<=(num2.num.size()); i++)
                {
                    arr6[i]=arr2[i-(((num2.num.size())-(num.size()-1)))];
                }
                for(int i =  num2.num.size(); i >-1 ; i-- )
                {
                    arr5[i]=arr6[i]+arr3[i];

                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr6[i-1]+=1;

                    }
                    if(i==0)
                    {
                        if(arr5[i+1]==9)
                        {
                            counter=1;
                            arr5[i]=45;
                        }
                        else
                        arr5[i]=43;
                    }

                }
                if(counter==1)
                {
                    int arr7[num2.num.size()];
                    for(int i =  0; i <=num2.num.size() ; i++ )
                    {
                        arr7[i]=arr5[i];
                    }
                    for(int i =  num2.num.size(); i >0 ; i-- )
                    {
                        if(i==num2.num.size())
                        {
                            arr5[i+1]=-10;
                            arr5[i]=10-arr7[i];
                        }

                        else
                        arr5[i]=9-arr7[i];
                        while(arr5[i]==10)
                        {
                            arr5[i]-=10;
                            arr5[i-1]=10-arr7[i-1];
                            i--;
                        }

                    }

                }
               int j=0;
                 for(int i = 0; i <=num2.num.size() ; i++){
                    if(i==0){
                            num3.num=char(arr5[i]);
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
            }
}


        else if(((int(num[0])==45)&&(int(num2.num[0])==45)))
        {

            int arr5[num.size()-1];
            if((num.size()-1)==(num2.num.size()-1))
            {

                for(int i =  num.size(); i >0 ; i-- )
                {

                    arr5[i]=arr1[i]+arr3[i];
                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr1[i-1]+=1;

                    }
                }
                for(int i = 0; i <=num.size() ; i++){
                        if(i==0){
                            num3.num='-';
                        }
                    else{
                    if(char(arr5[i])+'0'=='0'){
                        i++;
                    }
                    num3.num+=char(arr5[i])+'0';
                    }
                }
            }

            else if((num.size()-1)>(num2.num.size()-1))
            {
                int arr5[num.size()];
                int arr6[num.size()];
                for(int i=1; i<=((num.size()-1)-(num2.num.size()-1)); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num.size())-num2.num.size())+1; i<=(num.size()+1); i++)
                {
                    arr6[i]=arr3[i-(((num.size())-num2.num.size()))];

                }

                for(int i =  num.size(); i >0 ; i-- )
                {
                    arr5[i]=arr1[i]+arr6[i];
                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr1[i-1]+=1;
                    }

                }
                int j=0;
                 for(int i = 0; i <=num.size() ; i++){
                    if(i==0){
                            num3.num='-';
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }

                    }
                 }
            }

            else
            {
                int arr5[num2.num.size()];
                int arr6[num2.num.size()];
                for(int i=1; i<=((num2.num.size()-1)-(num.size()-1)); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num2.num.size()-1)-(num.size()-1))+1; i<=(num2.num.size()+1); i++)
                {
                    arr6[i]=arr1[i-((num2.num.size()-1)-(num.size()-1))];
                }
                for(int i =  num2.num.size(); i >0 ; i-- )
                {
                    arr5[i]=arr6[i]+arr3[i];
                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr6[i-1]+=1;
                    }
                }
                int j=0;
                 for(int i = 0; i <=num2.num.size() ; i++){
                    if(i==0){
                            num3.num='-';
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
            }
        }


        return num3;
    }

    BigDecimalInt BigDecimalInt:: operator- ( BigDecimalInt num2)
        {
        int arr1[num.size()+1];
        int arr2[num.size()];
        int arr3[num2.num.size()+1];
        int arr4[num2.num.size()];

        if(int(num[0])==45){
            for(int i=0; i<=(num.size()); i++)
        {
            arr1[0]=45;
            arr1[1]=0;
            arr1[i+2]=num[i+1]-48;
        }
        for(int i=(num.size()); i>-1; i--)
        {
            if(i==num.size())
            {
                arr2[i]=10-arr1[i];
            }
            else{
                if(i==0){
                  arr2[i]=45;
                }
                else{
                    arr2[i]=9-arr1[i];
                    while(arr2[i]==10)
                    {
                        arr2[i]-=10;
                        arr2[i-1]=10-arr1[i-1];
                        i--;
                    }
                }
            }
        }
        }
        else{
           for(int i=0; i<=(num.size()+1); i++)
        {
            arr1[0]=43;
            arr1[1]=0;
            arr1[i+2]=num[i]-48;
        }
        for(int i=(num.size()+1); i>-1; i--)
        {
            if(i==num.size()+1)
            {
                arr2[i]=10-arr1[i];
            }
            else{
                if(i==0){
                  arr2[i]=45;
                }
                else{
                    arr2[i]=9-arr1[i];
                    while(arr2[i]==10)
                    {
                        arr2[i]-=10;
                        arr2[i-1]=10-arr1[i-1];
                        i--;
                    }
                }
            }
        }
        }
        if(int(num2.num[0])==45){
        for(int i=0; i<=(num2.num.size()); i++)
        {
            arr3[0]=43;
            arr3[1]=0;
            arr3[i+2]=num2.num[i+1]-48;
        }
        for(int i=(num2.num.size()); i>-1; i--)
        {
            if(i==num2.num.size())
            {
                arr4[i]=10-arr3[i];
            }
            else{
                if(i==0){
                  arr4[i]=45;
                }
                else{
                    arr4[i]=9-arr3[i];
                    while(arr4[i]==10)
                    {
                    arr4[i]-=10;
                    arr4[i-1]=10-arr3[i-1];
                    i--;
                    }
                }
            }
        }
        }
        else{
         for(int i=0; i<=(num2.num.size()+1); i++)
         {
            arr3[0]=43;
            arr3[1]=0;
            arr3[i+2]=num2.num[i]-48;
         }
          for(int i=(num2.num.size()+1); i>-1; i--)
        {
            if(i==num2.num.size()+1)
            {
                arr4[i]=10-arr3[i];
            }
            else{
                if(i==0){
                  arr4[i]=45;
                }
                else{
                    arr4[i]=9-arr3[i];
                    while(arr4[i]==10)
                    {
                    arr4[i]-=10;
                    arr4[i-1]=10-arr3[i-1];
                    i--;
                    }
                }
            }
        }

        }
        BigDecimalInt num3;
        if(((int(num[0])!=45)&&(int(num2.num[0])==45)))
        {
            int arr5[num.size()];
            if(num.size()==(num2.num.size()-1))
            {

                for(int i =  num.size(); i >0 ; i-- )
                {

                    arr5[i]=arr1[i]+arr3[i];
                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr1[i-1]+=1;

                    }
                }
                for(int i = 0; i <=num.size() ; i++){
                        if(i==0){
                            num3.num='+';
                        }
                    else{
                    if(char(arr5[i])+'0'=='0'){
                        i++;
                    }
                    num3.num+=char(arr5[i])+'0';
                    }
                }
            }

            else if((num.size())>(num2.num.size()-1))
            {
                int arr5[num.size()+1];
                int arr6[num.size()+1];
                for(int i=1; i<=((num.size())-num2.num.size()); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num.size())-(num2.num.size()-1))+1; i<=(num.size()+1); i++)
                {
                    arr6[i]=arr3[i-(((num.size())-(num2.num.size()-1)))];

                }

                for(int i =  num.size()+1; i >0 ; i-- )
                {
                    arr5[i]=arr1[i]+arr6[i];
                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr1[i-1]+=1;
                    }

                }
                int j=0;
                 for(int i = 0; i <=num.size()+1 ; i++){
                    if(i==0){
                            num3.num='+';
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }

                    }
                 }
            }

            else
            {
                int arr5[num2.num.size()+1];
                int arr6[num2.num.size()+1];
                for(int i=1; i<=((num2.num.size()-1)-num.size()); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num2.num.size()-1)-num.size())+1; i<=(num2.num.size()+1); i++)
                {
                    arr6[i]=arr1[i-((num2.num.size()-1)-num.size())];
                }
                for(int i =  num2.num.size(); i >0 ; i-- )
                {
                    arr5[i]=arr6[i]+arr3[i];
                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr6[i-1]+=1;
                    }
                }
                int j=0;
                 for(int i = 0; i <=num2.num.size() ; i++){
                    if(i==0){
                            num3.num='+';
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
            }
        }
        else if(int (num[0])!=45&&(int(num2.num[0])!=45))
        {
            int arr5[num.size()+1];
            int counter=0;
            if((num.size())==num2.num.size())
            {
                for(int i =  num.size()+1; i >-1 ; i-- )
                {
                    arr5[i]=arr1[i]+arr4[i];

                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr1[i-1]+=1;

                    }
                    if(i==0)
                    {
                        if(arr5[i+1]==9)
                        {
                            counter=1;
                            arr5[i]=45;
                        }
                        else
                            arr5[i]=43;

                    }

                }
                if(counter==1)
                {
                    int arr7[num.size()];
                    for(int i =  0; i <=num.size()+1 ; i++ )
                    {
                        arr7[i]=arr5[i];

                    }
                    for(int i =  num.size()+1; i >0 ; i-- )
                    {
                        if(i==num.size()+1)
                        {
                            arr5[i+1]=-10;
                            arr5[i]=10-arr7[i];
                        }
                        else
                        arr5[i]=9-arr7[i];
                        if(arr5[i]==10)
                        {
                            arr5[i]-=10;
                            arr5[i-1]=10-arr7[i-1];
                            i--;
                        }
                    }

                }
                int j=0;
                 for(int i = 0; i <=num.size()+1 ; i++){
                    if(i==0){
                            num3.num=char(arr5[i]);
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
                if(j==0){
                    num3.num="0";
                }

            }
            else if((num.size())>(num2.num.size()))
            {
                int arr6[num.size()+1];
                int arr5[num.size()+1];
                int counter=0;
                for(int i=1; i<=((num.size())-(num2.num.size())); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num.size())-(num2.num.size()))+1; i<=(num.size()+1); i++)
                {
                    arr6[i]=arr4[i-((num.size())-(num2.num.size()))];
                }
                for(int i =  num.size()+1; i >-1 ; i-- )
                {
                    if(i==num.size()+1)
                    {
                        arr5[i+1]=-10;
                    }
                    arr5[i]=arr1[i]+arr6[i];

                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr1[i-1]+=1;

                    }


                    if(i==0)
                    {
                        if(arr5[i+1]==0)
                        {
                            counter=1;
                            arr5[i]=45;
                        }
                        else
                           arr5[i]=43;
                    }

                }


                if(counter==1)
                {
                    int arr7[num.size()+1];
                    for(int i =  0; i <=num.size()+1 ; i++ )
                    {
                        arr7[i]=arr5[i];

                    }

                    for(int i =  num.size()+1; i >0 ; i-- )
                    {
                        if(i==num.size()+1)
                        {
                            arr5[i+1]=-10;
                            arr5[i]=10-arr7[i];
                        }

                        else
                        {
                            arr5[i]=9-arr7[i];
                        }
                        while (arr5[i]==10)
                        {
                            arr5[i]-=10;
                            arr5[i-1]=10-arr7[i-1];
                            i--;
                        }
                    }
                }
                int j=0;
                 for(int i = 0; i <=num.size()+1 ; i++){
                    if(i==0){
                            num3.num=char(arr5[i]);
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
            }

            else
            {
                int arr6[num2.num.size()+1];
                int arr5[num2.num.size()+1];
                for(int i=1; i<=((num2.num.size())-(num.size())); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num2.num.size()+1)-(num.size()))+1; i<=(num2.num.size()); i++)
                {
                    arr6[i]=arr1[i-(((num2.num.size()+1)-(num.size())))];
                }
                for(int i =  num2.num.size(); i >-1 ; i-- )
                {
                    arr5[i]=arr6[i]+arr4[i];

                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr6[i-1]+=1;

                    }
                    if(i==0)
                    {
                        if(arr5[i+1]==9)
                        {
                            counter=1;
                            arr5[i]=45;
                        }
                        else
                        arr5[i]=43;
                    }
                }
                if(counter==1)
                {
                    int arr7[num2.num.size()+1];
                    for(int i =  0; i <=num2.num.size()+1 ; i++ )
                    {
                        arr7[i]=arr5[i];
                    }
                    cout<<endl;
                    for(int i =  num2.num.size()+1; i >0 ; i-- )
                    {
                        if(i==num2.num.size()+1)
                        {
                            arr5[i+1]=-10;
                            arr5[i]=10-arr7[i];
                        }

                        else
                        arr5[i]=9-arr7[i];
                        while(arr5[i]==10)
                        {
                            arr5[i]-=10;
                            arr5[i-1]=10-arr7[i-1];
                            i--;
                        }

                    }

                }
               int j=0;
                 for(int i = 0; i <=num2.num.size()+1 ; i++){
                    if(i==0){
                            num3.num=char(arr5[i]);
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
            }
        }

        else if(int (num[0])==45&&(int(num2.num[0])==45))
{
            int arr5[num2.num.size()];
            int counter=0;
            if((num.size()-1)==(num2.num.size()-1))
            {
                for(int i =  num2.num.size(); i >-1 ; i-- )
                {
                    arr5[i]=arr2[i]+arr3[i];

                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr2[i-1]+=1;

                    }
                    if(i==0)
                    {
                        if(arr5[i+1]==9)
                        {
                            counter=1;
                            arr5[i]=45;
                        }
                        else
                            arr5[i]=43;

                    }


                }
                if(counter==1)
                {
                    int arr7[num.size()];
                    for(int i =  0; i <=num2.num.size() ; i++ )
                    {
                        arr7[i]=arr5[i];

                    }
                    for(int i =  num2.num.size(); i >0 ; i-- )
                    {
                        if(i==num2.num.size())
                        {
                            arr5[i+1]=-10;
                            arr5[i]=10-arr7[i];
                        }
                        else
                        arr5[i]=9-arr7[i];
                        if(arr5[i]==10)
                        {
                            arr5[i]-=10;
                            arr5[i-1]=10-arr7[i-1];
                            i--;
                        }
                    }

                }
                int j=0;
                 for(int i = 0; i <=num2.num.size() ; i++){
                    if(i==0){
                            num3.num=char(arr5[i]);
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
                if(j==0){
                    num3.num="0";
                }

            }
            else if((num.size()-1)>(num2.num.size()))
            {
                int arr6[num.size()];
                int arr5[num.size()];
                int counter=0;
                for(int i=1; i<=((num.size()-1)-(num2.num.size()-1)); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num.size()-1)-(num2.num.size()-1))+1; i<=(num.size()); i++)
                {
                    arr6[i]=arr3[i-((num.size()-1)-(num2.num.size()-1))];
                }
                for(int i =  num.size(); i >-1 ; i-- )
                {
                    if(i==num.size())
                    {
                        arr5[i+1]=-10;
                    }
                    arr5[i]=arr2[i]+arr6[i];

                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr2[i-1]+=1;

                    }


                    if(i==0)
                    {
                        if(arr5[i+1]==9)
                        {
                            counter=1;
                            arr5[i]=45;
                        }
                        else
                           arr5[i]=43;
                    }
                }


                if(counter==1)
                {
                    int arr7[num.size()];
                    for(int i =  0; i <=num.size() ; i++ )
                    {
                        arr7[i]=arr5[i];

                    }

                    for(int i =  num.size(); i >0 ; i-- )
                    {
                        if(i==num.size())
                        {
                            arr5[i+1]=-10;
                            arr5[i]=10-arr7[i];
                        }

                        else
                        {
                            arr5[i]=9-arr7[i];
                        }
                        while (arr5[i]==10)
                        {
                            arr5[i]-=10;
                            arr5[i-1]=10-arr7[i-1];
                            i--;
                        }
                    }
                }
                int j=0;
                 for(int i = 0; i <=num.size() ; i++){
                    if(i==0){
                            num3.num=char(arr5[i]);
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
            }

            else
            {
                int arr6[num2.num.size()];
                int arr5[num2.num.size()];
                for(int i=1; i<=((num2.num.size()-1)-(num.size()-1)); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num2.num.size()-1)-(num.size()-1))+1; i<=(num2.num.size()); i++)
                {
                    arr6[i]=arr2[i-(((num2.num.size()-1)-(num.size()-1)))];
                }
                for(int i =  num2.num.size()-1; i >-1 ; i-- )
                {
                    arr5[i]=arr6[i]+arr3[i];

                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr6[i-1]+=1;

                    }
                    if(i==0)
                    {
                        if(arr5[i+1]==9)
                        {
                            counter=1;
                            arr5[i]=45;
                        }
                        else
                        arr5[i]=43;
                    }

                }
                if(counter==1)
                {
                    int arr7[num2.num.size()-1];
                    for(int i =  0; i <=num2.num.size() ; i++ )
                    {
                        arr7[i]=arr5[i];
                    }
                    for(int i =  num2.num.size()-1; i >0 ; i-- )
                    {
                        if(i==num2.num.size()-1)
                        {
                            arr5[i+1]=-10;
                            arr5[i]=10-arr7[i];
                        }

                        else
                        arr5[i]=9-arr7[i];
                        while(arr5[i]==10)
                        {
                            arr5[i]-=10;
                            arr5[i-1]=10-arr7[i-1];
                            i--;
                        }

                    }

                }
               int j=0;
                 for(int i = 0; i <=num2.num.size()-1 ; i++){
                    if(i==0){
                            num3.num=char(arr5[i]);
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
            }
}


        else if(((int(num[0])==45)&&(int(num2.num[0])!=45)))
        {

            int arr5[num.size()-1];
            if((num.size()-1)==(num2.num.size()))
            {

                for(int i =  num.size(); i >0 ; i-- )
                {

                    arr5[i]=arr1[i]+arr3[i];
                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr1[i-1]+=1;

                    }
                }
                for(int i = 0; i <=num.size() ; i++){
                        if(i==0){
                            num3.num='-';
                        }
                    else{
                    if(char(arr5[i])+'0'=='0'){
                        i++;
                    }
                    num3.num+=char(arr5[i])+'0';
                    }
                }
            }

            else if((num.size()-1)>(num2.num.size()))
            {
                int arr5[num.size()];
                int arr6[num.size()];
                for(int i=1; i<=((num.size()-1)-(num2.num.size())); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num.size()-1)-(num2.num.size()))+1; i<=(num.size()); i++)
                {
                    arr6[i]=arr3[i-(((num.size()-1)-(num2.num.size())))];

                }

                for(int i =  num.size(); i >0 ; i-- )
                {
                    arr5[i]=arr1[i]+arr6[i];
                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr1[i-1]+=1;
                    }

                }
                int j=0;
                 for(int i = 0; i <=num.size() ; i++){
                    if(i==0){
                            num3.num='-';
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }

                    }
                 }
            }

            else
            {
                int arr5[num2.num.size()];
                int arr6[num2.num.size()];
                for(int i=1; i<=((num2.num.size())-(num.size()-1)); i++)
                {
                    arr6[0]=43;
                    arr6[i]=0;
                }
                for(int i=((num2.num.size())-(num.size()-1))+1; i<=(num2.num.size()+1); i++)
                {
                    arr6[i]=arr1[i-((num2.num.size())-(num.size()-1))];
                }
                for(int i =  num2.num.size()+1; i >0 ; i-- )
                {
                    arr5[i]=arr6[i]+arr3[i];
                    if(arr5[i]>9)
                    {
                        arr5[i]-=10;
                        arr6[i-1]+=1;
                    }
                }
                int j=0;
                 for(int i = 0; i <=num2.num.size()+1 ; i++){
                    if(i==0){
                            num3.num='-';
                        }
                    else{
                    if((char(arr5[i])+'0'!='0')||(j==1)){
                            num3.num+=char(arr5[i])+'0';
                             j=1;
                    }
                    }
                 }
            }
        }


        return num3;
    }
ostream& operator<<(ostream& os, BigDecimalInt num3)
{
     os<<num3.num;
    return os;
}

BigDecimalInt::~BigDecimalInt()
{

}
