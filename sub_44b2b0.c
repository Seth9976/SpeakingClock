// 函数: sub_44b2b0
// 地址: 0x44b2b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ecx
int32_t* var_8 = ecx
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
sub_423334(arg1, 0, ecx)
*(arg1 + 0x3e) = 1
*(arg1 + 0x39) = 1
*(arg1 + 0x3b) = 2
arg1[0xf].b = 2
int16_t eax_1
int32_t ecx_1
int32_t edx
eax_1, ecx_1, edx = sub_44ad94()
arg1[0x14].w = eax_1
arg1[0x10] = 0xffffffff
edx.b = 1
void* eax_3 = sub_403c38(ecx_1, edx)
arg1[0x1e] = eax_3
*(eax_3 + 0xc) = arg1
*(eax_3 + 8) = sub_44ee00

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
