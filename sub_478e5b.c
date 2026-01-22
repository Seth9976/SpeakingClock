// 函数: sub_478e5b
// 地址: 0x478e5b
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg2[arg4].b += arg2:1.b
char temp1 = *arg1
*arg1 += arg2:1.b
char* entry_ebx

if (temp1 != neg.b(arg2:1.b) && temp1 + arg2:1.b u>= temp1)
    entry_ebx:1.b s>>= arg3.b
    return sub_478eac(arg5, arg6 s>> arg3.b) __tailcall

*(arg5 * 3 + 0x79f00045) += arg3:1.b
arg1[(arg6 << 1) + 0x45] += arg3:1.b
entry_ebx[(arg3 << 2) - 0x5e0bffbb] += arg1:1.b
int32_t ebp_2 = arg4 + 3
char temp2 = arg1.b
arg1.b += arg3:1.b
int32_t eflags
int32_t esp
int32_t edi_3

if (temp2 s< neg.b(arg3:1.b))
    arg6 += 1
    arg1[0xa00047bc] += arg2.b
    esp = 0xbcc40047
label_478ecc:
    edi_3 = arg6 + 1
    *arg1 += entry_ebx:1.b
    ebp_2 = 0xbe240047
else
    char temp3_1 = arg1:1.b
    char temp4_1 = arg1:1.b
    arg1:1.b *= 2
    
    if (temp3_1 s< neg.b(temp4_1))
        *(&__return_addr + (ebp_2 << 1)) += entry_ebx:1.b
        char temp5_1 = arg1:1.b
        char temp6_1 = arg1.b
        arg1:1.b += arg1.b
        
        if (temp5_1 s>= neg.b(temp6_1))
            goto label_478ecc
        
        arg1[0xffffffb1] += arg3.b
        *arg1 += arg2.b
        *entry_ebx += arg1.b
        char temp8 = arg3.b
        arg3.b += arg1[arg5 << 2]
        arg1[0xb00eb006] = sbb.b(arg1[0xb00eb006], arg2:1.b, temp8 + arg1[arg5 << 2] u< temp8)
        bool c_2 = unimplemented  {sbb byte [eax-0x4ff14ffa], dh}
        char temp11 = arg2:1.b
        char temp12 = arg1[0xb013b024]
        arg2:1.b = adc.b(temp11, temp12, c_2)
        arg1.b = adc.b(arg1.b, 0xb0, 
            adc.b(temp11, temp12, c_2) u< temp11 || (c_2 && adc.b(temp11, temp12, c_2) == temp11))
        __out_dx_oeax(arg2.w, arg1, eflags)
        undefined
    
    arg1[0xc40047bc] += arg1:1.b
    esp = 0xbd380047
    edi_3 = arg6 + 2
    arg5[edi_3 * 2].b += arg1:1.b

*(arg3 + ((edi_3 + 1) << 2)) += arg3.b
*0xb6ebfffe += arg3.b
entry_ebx:1.b = 0x47
char* eax_2 = 0x540c0047
*(esp - 4) = entry_ebx

if (add_overflow(0x47 + arg2:1.b, arg2:1.b))
    *0x540c0047 += 0x47
    *arg5 += arg3.b
    *0x67696c41 += 0x47
    arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
    *0x540c0047 += arg2.b
    eax_2 = 0x540c0048
    *(arg2 + 0x8ff0001) = *(arg2 + 0x8ff0001)
else
    int16_t* temp13_1 = arg2
    arg2 += 1
    
    if (temp13_1 == 0xffffffff)
        if (temp13_1 == 0xffffffff)
            jump(0x478f69)
        
        jump(sub_478eac+0x4e)

*eax_2 += eax_2.b
*eax_2 += eax_2.b
char temp14 = *eax_2
*eax_2 += eax_2.b
int0_t tr
*arg2 = __str_memw(tr)
uint8_t* edi_8
uint8_t temp0_1
temp0_1, edi_8 = __insb(edi_3 + 4, arg2.w, eflags)
*edi_8 = temp0_1
uint8_t* edi_9
uint8_t temp0_2
temp0_2, edi_9 = __insb(edi_8, arg2.w, eflags)
*edi_9 = temp0_2
__outsd(arg2.w, *arg5, arg5, eflags)

if (arg3 != 0xffffffff && temp14 + eax_2.b u>= temp14)
    char* eax_3 = *(arg3 + 1 + (ebp_2 << 1) + 0x4d) * 0x1065646f
    int16_t ds
    *(esp - 8) = zx.d(ds)
    *(eax_3 * 2) += (arg2.w + 1):1.b
    undefined

uint8_t* edi_10
uint8_t temp0_3
temp0_3, edi_10 = __insb(edi_9, arg2.w, eflags)
*edi_10 = temp0_3
uint8_t* edi_11
uint8_t temp0_4
temp0_4, edi_11 = __insb(edi_10, arg2.w, eflags)
*edi_11 = temp0_4
*(esp - 8) = ebp_2

if (add_overflow(arg3, 1))
    jump(sub_478fdb+0x16)

jump(sub_478eac+0xdd)
