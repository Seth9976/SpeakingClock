// 函数: sub_48771c
// 地址: 0x48771c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
char temp1 = *arg1
*arg1 += arg1.b

if (temp1 != neg.b(arg1.b) && temp1 + arg1.b u>= temp1)
    goto label_487783

*(arg1 * 2) += arg3.b
*arg1 += arg1.b
arg6[0x40]
arg1[0xbc00403e] += arg2:1.b
void* eax
eax.b = (&arg1[1]).b * 2
void* eax_1
eax_1:1.b = (eax + 1):1.b + (eax + 1).b
int16_t entry_ebx
*(eax_1 + 0x403f) += entry_ebx:1.b
*(&__return_addr + arg6) += entry_ebx.b
*(eax_1 + 0x3e) += entry_ebx.b
*(((eax_1 + 3) << 1) + 0x61766e49) += arg3.b
int32_t eflags
uint8_t temp0_1
temp0_1, arg6 = __insb(arg6, arg2.w, eflags)
*arg6 = temp0_1
char* esp = *(arg6 + (arg2 << 1) + 0x61) * 0x408d6576
char temp4_1 = (eax_1 + 3).b
char temp5_1 = (eax_1 + 3).b
arg1.b = (eax_1 + 3).b * 2

if (temp4_1 == neg.b(temp5_1) || temp4_1 + temp5_1 u< temp4_1)
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
label_487783:
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp2_1 = arg1.b
    char temp3_1 = arg1.b
    arg1.b *= 2
    
    if (temp2_1 != neg.b(temp3_1) && temp2_1 + temp3_1 u>= temp2_1)
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1[(arg6 << 1) + 0x48] += entry_ebx.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1[(arg6 << 1) + 0x48] += arg3.b
        *(arg1 * 2) += entry_ebx.b
        *arg1 += arg1.b
        trap(0xd)
    
    *(arg1 * 2) += arg3.b
    *arg1 += arg1.b
    arg6[0x40]
    arg1[0xbc00403e] += arg2:1.b
    void* eax_4
    eax_4.b = (&arg1[1]).b * 2
    void* eax_5
    eax_5:1.b = (eax_4 + 1):1.b + (eax_4 + 1).b
    *(eax_5 + 0x403f) += entry_ebx:1.b
    *(esp + arg6) += entry_ebx.b
    *(eax_5 + 0x3e) += entry_ebx.b
    arg1 = eax_5 + 3

char temp6 = *arg2
*arg2 += arg2.b
bool c_3 = temp6 + arg2.b u< temp6

if (c_3)
    char temp8 = arg1[0xd000487b]
    arg1[0xd000487b] += arg2.b
    
    if (temp8 s< neg.b(arg2.b))
        return sub_487888(arg1) __tailcall
    
    *((arg6 << 1) + 0x7e280048) += arg3:1.b
    char temp9 = arg1[0x800487d]
    arg1[0x800487d] += (arg1 - 1).b
    *(esp - 4) = esp
    *(esp - 8) = arg6
    *(esp - 8)
    *(esp - 4)
    *esp
    *(esp + 8)
    *(esp + 0xc)
    *(esp + 0x10)
    *(esp + 0x14)
    
    if (esp == 4 || temp9 + (arg1 - 1).b u< temp9)
        undefined
    
    jump(0x487855)

uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)

if (c_3)
    arg1:1.b += arg1.b
    arg1[0x403f] += entry_ebx:1.b
    *(esp + arg6) += entry_ebx.b
    void* eax_10
    eax_10:1.b = (&arg1[2]):1.b + arg2.b
    bool p = unimplemented  {add ah, dl}
    
    if (not(p))
        jump(0x487867)
    
    return sub_48781f(eax_10, arg2, arg3, arg4 + 2, esi, arg6) __tailcall

*(esp - 4) = 0x696b6365
__outsb(arg2.w, *esi, esi, eflags)
*(esp - 8) = arg6
*(esp - 8)
*(esp - 4)
*esp
*(esp + 8)
*(esp + 0xc)
*(esp + 0x10)
*(esp + 0x14)

if (arg4 == 0xfffffffe || c_3)
    jump(0x487838)

jump(0x4877d3)
