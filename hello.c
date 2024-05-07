#include <stdio.h>
// struct SinhVien {
//     int maSV;
//     int diemSo;
// };

// typedef struct SinhVien SV;

// void nhap(SV *sv) {
//     scanf("%d", sv->maSV);
//     scanf("%d", sv->diemSo);
// };

// void in(SV sv) {
//     printf("%d %d", sv.maSV, sv.diemSo);
// };

int main() {
    printf(" OK ");

    // SV sv;
    // nhap(&sv);
    // in(sv);

    int valueConTro = 12; 
    int *contro; //Khai báo con trỏ

    contro = &valueConTro; //dùng &value để lấy địa chỉ ô nhớ từ giá trị biến
    printf("%d", contro); //khi dùng con trỏ thì chỉ cần tên con trỏ (ko cần dấu *)
    printf(" OK LAN 2 ");

    printf("%d", *contro); //dùng dấu * và tên con trỏ để truy cập giá trị mà con trỏ trỏ tới (Trong VD này là valueConTro)

    printf(" change value through pointer ");
    *contro = 13; // thay đổi giá trị mà con trỏ trỏ tới
    printf("%d", *contro);


    printf(" increase pointer ");

    contro += 1; // thay đổi giá trị con trỏ
    printf("%d", contro);


    printf(" OK LAN 3 ");

    return 0;
}