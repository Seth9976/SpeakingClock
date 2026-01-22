// 函数: sub_48b874
// 地址: 0x48b874
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* esp = &var_10

if (arg2.b != 0)
    void var_20
    esp = &var_20
    arg1 = sub_403fcc(ecx, arg2)

var_8:3.b = arg2.b
sub_491920(arg1, 0)
arg1[0x12].b = 1
*(arg1 + 0x49) = 0
arg1[0x13].b = 0
*(arg1 + 0x61) = 0
*(arg1 + 0x4a) = 0
*(arg1 + 0x4d) = 0
int32_t* esi_1 = arg1[1]

if (sub_403df4(esi_1, 0x46a498) != 0)
    char eax_3 = *(esi_1 + 0x277)
    
    if (eax_3 == 1)
        *(arg1 + 0x4d) = 1
    else if (eax_3 == 2)
        *(arg1 + 0x4d) = 2

if (var_8:3.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
esp[3]
return arg1
