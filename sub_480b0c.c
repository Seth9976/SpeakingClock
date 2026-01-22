// 函数: sub_480b0c
// 地址: 0x480b0c
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
void* ebp_1 = sub_45a640(arg1, 0)
sub_456ec8(arg1, 0x121)
sub_456efc(arg1, 0xc1)
int32_t ecx_1
int32_t edx_1
ecx_1, edx_1 = sub_45fb58(arg1, 1)
arg1[0x14] = 0x80081
edx_1.b = 1
void* eax_5
int32_t edx_2
eax_5, edx_2 = sub_403c38(ecx_1, edx_1)
arg1[0x9c] = eax_5
*(eax_5 + 0x18) = arg1
edx_2.b = 1
int32_t* eax_6 = sub_42bd40(sub_45171c+0x240, edx_2)
arg1[0x94] = eax_6
int32_t ecx_2
int32_t edx_4
ecx_2, edx_4 = sub_45607c(eax_6, arg1)
edx_4.b = 1
void* eax_9 = sub_403c38(ecx_2, edx_4)
arg1[0x96] = eax_9
*(eax_9 + 0xc) = arg1
*(eax_9 + 8) = sub_480f84

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
