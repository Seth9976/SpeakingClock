// 函数: sub_478468
// 地址: 0x478468
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_18 = arg2
void* edi = *(data_4b1ce4 + 0x68)

if (edi != 0)
    sub_458ac8(edi, arg3)

void* ebp_1 = *(arg1 + 0x44)

if (edi != ebp_1 && ebp_1 != 0)
    sub_458ac8(ebp_1, arg3)

char eax_2 = 0

if (eax_2 == 0 && sub_403df4(arg3, &data_468718) != 0 && *(arg3 + 0x6a) != 0 && arg3[0x18].b != 0
        && (arg3[7].b & 0x10) == 0)
    sub_469278(arg3, *(arg3 + 0x42) != 0)

return zx.d(eax_2)
