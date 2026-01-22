// 函数: sub_44e918
// 地址: 0x44e918
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
int32_t var_8 = esi

if (arg2 == 0)
    sub_403c68(arg1[0x11])
    arg1[0x11] = 0
    return 0

if (arg1[0x11] == 0)
    esi.w = 0xffee
    int32_t eax_3
    int32_t edx
    eax_3, edx = sub_403e64(arg1, esi)
    edx.b = 1
    arg1[0x11] = (*(eax_3 + 0x14))()

(*(*arg1[0x11] + 0xc))()
void* eax_6 = arg1[0x11]
*(eax_6 + 0xc) = arg1
*(eax_6 + 8) = sub_44ebb0
int32_t ecx_3
ecx_3.b = (*(arg2 + 0x1c) & 1) != 0
esi.w = 0xffef
sub_403e64(arg1, esi, arg2, ecx_3)
return sub_423408(arg2, arg1)
