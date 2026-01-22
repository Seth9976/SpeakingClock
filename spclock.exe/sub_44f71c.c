// 函数: sub_44f71c
// 地址: 0x44f71c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = arg3
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* esp = &var_14

if (arg2.b != 0)
    void var_24
    esp = &var_24
    arg1 = sub_403fcc(arg3, arg2)

var_8:3.b = arg2.b
arg2.b = 1
int32_t* eax
int32_t ecx_1
int32_t edx
eax, ecx_1, edx = sub_44b2b0(sub_449c4d+0x103, arg2)
arg1[0xd] = eax
eax[0x21] = arg1
eax[0x20] = *(*arg1 + 0x38)
eax[0x1c] = arg1
edx.b = 1
void* eax_4 = sub_403c38(ecx_1, edx)
arg1[0x11] = eax_4
*(eax_4 + 0xc) = arg1
*(eax_4 + 8) = 0x45025c
*(arg1 + 0x41) = 1
sub_423334(arg1, 0, arg3)
void* eax_6 = arg1[0xd]
*(eax_6 + 0x3b) = 0
*(eax_6 + 0x3c) = 0
sub_4506cc(arg1)

if (var_8:3.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
esp[3]
esp[4]
return arg1
