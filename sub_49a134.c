// 函数: sub_49a134
// 地址: 0x49a134
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg1

if (*(ebx + 0x25d) != 0)
    return 

char eax_1 = (*(*ebx + 0xe8))()

if (eax_1 != 0)
    arg1 = (*(*ebx + 0xe0))()

if (eax_1 != 0 && arg1.b != 0)
    return 

char eax_4 = (*(*ebx + 0x154))()

if (eax_4 != 0)
    void var_20
    sub_418a3c(0, 0, &var_20)
    (*(*ebx + 0x44))(0, &var_20)
    ebx[0x94]
    arg1 = (*(*ebx + 0x180))()

if (eax_4 != 0 && arg1.b != 0)
    return 

int32_t* esi_2 = ebx[0x94]
int32_t eax_8 = (*(*ebx + 0x134))()
sub_42bbb0(esi_2[5], eax_8)
sub_42bcec(esi_2[5], 0)
(*(*ebx + 0x44))()
RECT var_18
sub_42c258(esi_2, &var_18)
