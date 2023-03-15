#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a + b)/2;
}

string status(double r){
    if (r >=60){
        return "lulus";
    }else {
        return "gagal";
    }
}

string status2(double r, double n){
    if (r >=60 && n >= 70){
        return "luluus";
    }else {
        return "gagal";
    }
}

string status3(double r, double n){
    if (r >=60 || n >= 70){
        return "lulus";
    }else {
        return "gagal";
    }
} 

int main(){
    double nilaiMath, nilaiBindo;


    cout << "masukkan nilai matematika : ";
    cin >> nilaiMath;
    cout << "masukkan nilai bahasa indonesia : ";
    cin >> nilaiBindo;

    //rerata = (nilaiMath + nilaiBindo)/2;

    //rata = rerata(nilaiMath, nilaiBindo);
    //st = status(rerata(nilaiMath, nilaiBindo));

    // if (rata >= 60){
    //    status = "lulus";
    // }else {
    //    status = "gagal";
    //}

    cout << "Nilai rata-rata nya : " << rerata(nilaiMath, nilaiBindo);
    cout << "\nStatus kelulusannya : " << status(rerata(nilaiMath, nilaiBindo));
    cout << "\nStatus2 kelulusannya : " << status(rerata(nilaiMath, nilaiBindo));
    cout << "\nStatus3 kelulusannya : " << status(rerata(nilaiMath, nilaiBindo));

}