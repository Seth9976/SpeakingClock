// 函数: sub_461980
// 地址: 0x461980
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
int32_t edx
void* ebp_1
edx, ebp_1 = sub_45a640(arg1, 0)
edx.b = 1
int32_t* eax_1 = sub_42bd40(sub_45171c+0x240, edx)
arg1[0x94] = eax_1
sub_45607c(eax_1, arg1)

if (*(ebp_1 - 1) != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
esp[3]
return arg1
