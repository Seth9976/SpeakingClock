// 函数: sub_46bfa4
// 地址: 0x46bfa4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_8 = ebx
int32_t esi
int32_t var_c = esi
int32_t edi
int32_t var_10 = edi
int32_t* esp = &var_10

if (arg2.b != 0)
    void var_20
    esp = &var_20
    arg3 = sub_403fcc(arg1, arg2)

sub_403c38(arg1, 0)
arg3[1] = arg1
arg3[6].b = arg4
*(arg3 + 0xa) = 0x50
arg3[2].w = (divu.dp.d(0:0x50, 0xa)).w
arg3[7].b = 1
arg3[8] = 0xa
arg3[0x10] = 4
arg3[0xf] = 0xc
arg3[0xa] = 0xff000014
arg3[0xb].b = 1
arg3[0x11].b = 1

if (arg2.b != 0)
    sub_404024(arg3)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
esp[3]
return arg3
