// 函数: sub_434768
// 地址: 0x434768
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1
*arg3 += 1
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 = *arg1
char temp0 = *(arg1 + 0x4f060032)
*(arg1 + 0x4f060032) += arg1.b
bool c = temp0 + arg1.b u< temp0
int32_t eflags
uint16_t* esi = __outsb(arg2, *arg5, arg5, eflags)
int32_t ebp = arg4 + 1
bool cond:1 = arg4 != 0xffffffff

if (arg4 + 1 s< 0)
    char temp2_1 = *(arg1 + 0x4f0b0035)
    *(arg1 + 0x4f0b0035) += arg1.b
    c = temp2_1 + arg1.b u< temp2_1
    uint16_t* esi_2 = __outsb(arg2, *esi, esi, eflags)
    int32_t temp3_1 = ebp
    ebp -= 1
    cond:1 = temp3_1 != 1
    esi = __outsd(arg2, *esi_2, esi_2, eflags)
else if (arg4 != 0xffffffff)
    *arg1 += arg1.b
    arg1.b += *arg1
    *arg1 += 1
    arg1.b += *arg1
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    *(arg1 + 0x4f0d0033) += arg1.b
    __outsb(arg2, *esi, esi, eflags)
    
    if (arg6 == 0xffffffff)
        jump(0x4347f5)
    
    jump("iteInfo")

int32_t entry_ebx
void* esp

if (not(cond:1))
    esp = &__return_addr:1
    esi = __outsd(arg2, *esi, esi, eflags)
    
    if (&__return_addr == 0xffffffff || c)
        arg1.b -= 0x71
        *arg1 += entry_ebx:1.b
        *arg1 += arg1
        undefined

if (c)
    __outsd(arg2, *esi, esi, eflags)
    
    if (ebp == 1 || c)
        jump(0x4348d2)
    
    jump(sub_434801+0x6c)

*entry_ebx
bool cond:2 = (arg3 | *(arg6 + 0x6e)) == 0
*(esp - 4) = entry_ebx

if (cond:2)
    jump(sub_4348e6+0x52)

jump(sub_4348e6-0xf)
