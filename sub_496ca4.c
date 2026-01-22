// 函数: sub_496ca4
// 地址: 0x496ca4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp1 = arg1[0xf004975]
arg1[0xf004975] += arg1.b
int32_t eflags
uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg6, arg2.w, eflags)
*edi = temp0
uint16_t* esi_1 = __outsd(arg2.w, *esi, esi, eflags)
int32_t entry_ebx

if (temp1 + arg1.b u< temp1)
    *edi = *edi
    int32_t ebx
    ebx:1.b = (entry_ebx + 1):1.b * 2
    *arg1 += arg1.b
    
    if (arg1 u>= 0x909390bd)
        undefined
    
    jump(0x496d12)

__bound_gprv_mema32(arg4 - 1, *(arg2 + 0x65))
int32_t eflags_1
int16_t temp0_1
temp0_1, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 1 + ((arg3 - 1) << 2) - 0x40), esi_1.w)
*(entry_ebx + 1 + ((arg3 - 1) << 2) - 0x40) = temp0_1
char temp3 = *((arg3 - 1) * 3)
*((arg3 - 1) * 3) u>>= 7
__andps_xmmxud_memxud(arg7, *(arg4 - 1 + ((arg3 - 1) << 1) + 0x44))
uint16_t* esi_2 = __outsd(arg2.w, *esi_1, esi_1, eflags_1)
uint8_t* edi_1
uint8_t temp0_2
temp0_2, edi_1 = __insb(edi, arg2.w, eflags_1)
*edi_1 = temp0_2
__outsd(arg2.w, *esi_2, esi_2, eflags_1)

if ((temp3 & 0x40) != 0)
    jump(sub_496d18+3)

jump("bject")
