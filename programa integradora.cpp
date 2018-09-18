#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
       struct{
       int grupo, matricula; 
       string nombre, paterno, materno, tecnica;
       }alumno[5];
       string que, si, tecnica;
       int matricula=0, a=0, i=0, b=0;

       alumno[0].matricula=145798;
       alumno[0].grupo=521;
       alumno[0].nombre="Carlos";
       alumno[0].paterno="Martinez";
       alumno[0].materno= "Lopez";
       alumno[0].tecnica="sistemas";
       
       alumno[1].matricula=138974;
       alumno[1].grupo=534;
       alumno[1].nombre="Ricardo";
       alumno[1].paterno="Juarez";
       alumno[1].materno="Gonzales";
       alumno[1].tecnica="diseño";
       
       alumno[2].matricula=142114;
       alumno[2].grupo=524;
       alumno[2].nombre="Fernanda";
       alumno[2].paterno="Marquez";
       alumno[2].materno= "Sanchez";
       alumno[2].tecnica="sistemas";
       
       alumno[3].matricula=151224;
       alumno[3].grupo=521;
       alumno[3].nombre="Juan";
       alumno[3].paterno="Rodriguez";
       alumno[3].materno="Gonzales";
       alumno[3].tecnica="afd";
       
       alumno[4].matricula=149854;
       alumno[4].grupo=522;
       alumno[4].nombre="Luisa";
       alumno[4].paterno="Alvarez";
       alumno[4].materno="torres";
       alumno[4].tecnica="diseño";
       
       do
       {                         
       cout<<"¿Como lo quiere buscar? Por matricula o por tecnica"<<endl;
       cin>>que;
       if(que=="matricula"){
                            cout<<"Ingrese la matricula que desea buscar "<<endl;
                            cin>>matricula;
                            while(i<5){
                            if(matricula==alumno[i].matricula){
                                                               cout<<alumno[i].matricula<<" "<<alumno[i].grupo<<" "<<alumno[i].nombre<<" "<<alumno[i].paterno<<" ";
                                                               cout<<alumno[i].materno<<" "<<alumno[i].tecnica<<endl; 
                                                               i++;
                                                               }
                                                               else{
                                                                    b=b+1;
                                                                    i++;
                                                                    }                                                   
                            }
                            if(b>=5){
                            cout<<"Alumno no encontrado "<<endl; 
                            }
                            b=0;
                            i=0;
                            }
                            else{
                                 cout<<"Ingrese la tecnica que desea buscar "<<endl;
                                 cin>>tecnica;
                                 while(i<5){
                                         if(tecnica==alumno[i].tecnica){
                                                               cout<<alumno[i].matricula<<" "<<alumno[i].grupo<<" "<<alumno[i].nombre<<" "<<alumno[i].paterno<<" ";
                                                               cout<<alumno[i].materno<<" "<<alumno[i].tecnica<<endl;                                                           
                                                               i++;
                                                               }
                                                               else
                                                                    b=b+1;
                                                                    i++;
                                                                    }  
                            if(b==5){
                            cout<<"tecnica no encontrado "<<endl; 
                            }    
                            b=0;
                            i=0;                                                    
                                               }
                                                    cout<<"Deseas intentarlo otra vez? "<<endl;
                                                    cin>>si;
                                                    getch();
                                                    system("cls");
                                                    } while(si=="si");
                                                    getch();
                                                    return 0;
                                                    }                                                   
