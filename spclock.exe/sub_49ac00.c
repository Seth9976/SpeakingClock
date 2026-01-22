// 函数: sub_49ac00
// 地址: 0x49ac00
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
int32_t ecx_1
int32_t edx
ecx_1, edx = sub_461980(arg1, 0)
arg1[0x97].b = 1
arg1[0x99].b = 1
arg1[0xac].b = 0
*(arg1 + 0x263) = 0
arg1[0x9c] = 0
arg1[0x9b] = 0
arg1[0x9a] = 0
edx.b = 1
void* eax_2 = sub_403c38(ecx_1, edx)
arg1[0x9d] = eax_2
*(eax_2 + 0xc) = arg1
*(eax_2 + 8) = *(*arg1 + 0x168)
*(arg1 + 0x262) = 0
*(arg1 + 0x261) = 0
arg1[0x98].b = 0
sub_456ec8(arg1, 0x64)
sub_456efc(arg1, 0x28)
sub_45fb58(arg1, 0)
*(arg1 + 0x25f) = 0
int32_t edx_1
edx_1.b = 1
int32_t* eax_8 = sub_4958d4(&data_49562c, edx_1)
arg1[0xab] = eax_8
eax_8[3] = arg1
eax_8[2] = *(*arg1 + 0x15c)
arg1[0xae].b = 1
*(arg1 + 0x25d) = 0
arg1[0xaf] = 0
*(arg1 + 0x29e) = 4

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
