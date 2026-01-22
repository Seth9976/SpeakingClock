// 函数: sub_44bbed
// 地址: 0x44bbed
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*(arg4 - 0x75) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2.w, eflags)
arg4[-4] = *arg3
void* edi_1 = &arg4[-3]
void* esi_1 = arg3 + 4
*edi_1 = *esi_1
void* edi_2 = edi_1 + 4
void* esi_2 = esi_1 + 4
*edi_2 = *esi_2
*(edi_2 + 4) = *(esi_2 + 4)

if (*(arg1 + 0x92) != 0)
    *(arg1 + 0x94)
    arg1 = (*(arg1 + 0x90))(zx.d(arg4[2].b), &arg4[-4])

*arg4
return arg1
