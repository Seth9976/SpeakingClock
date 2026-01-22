// 函数: sub_46ae4c
// 地址: 0x46ae4c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg4
*arg1 += arg1.b
char temp1 = arg1[0x4f070046]
arg1[0x4f070046] += arg1.b
int32_t eflags
uint16_t* esi = __outsb(arg2, *arg4, arg4, eflags)
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg5, arg2, eflags)
*edi = temp0
char* esi_1 = __outsd(arg2, *esi, esi, eflags)

if (temp1 + arg1.b u< temp1)
    int32_t eax
    eax.b = 0x9f + *0xe000469f
    jump(eax)

*arg1 += arg1.b
arg1[0x80000000] += arg1.b
*esi_1 += arg3 - 1
uint16_t* esi_2 = __outsb(arg2, *esi_1, esi_1, eflags)
uint16_t* esi_3 = __outsd(arg2, *esi_2, esi_2, eflags)
uint16_t* esi_4 = __outsb(arg2, *esi_3, esi_3, eflags)
int32_t entry_ebx

if (entry_ebx != 0xfffffffe)
    if (entry_ebx + 2 s< 0)
        jump(0x46af4e)
    
    jump("Popup,qA")

char temp3 = arg1[0x4f09004c]
arg1[0x4f09004c] += arg1.b
__outsb(arg2, *esi_4, esi_4, eflags)

if (temp3 + arg1.b u< temp3)
    jump("roy,qA")

*arg1 += arg1.b
undefined
