// 函数: sub_479e88
// 地址: 0x479e88
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
sub_403c38(ecx, 0)
int32_t edx
edx.b = 1
int32_t* eax_1 = sub_430618(sub_42a104+0x140, edx)
arg1[1] = eax_1
eax_1[5] = arg1
eax_1[4] = sub_479fb8
arg1[7] = 0x8080
arg1[8].b = 1
int32_t eax_2 = 0

do
    arg1[zx.d(eax_2.b) + 3] = 0xffffffff
    eax_2 += 1
while (eax_2.b != 4)

if (data_4abbe4 == 0)
    uint32_t edx_1
    edx_1.b = 1
    data_4abbe4 = sub_479d84(0x479bf0, edx_1)

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
