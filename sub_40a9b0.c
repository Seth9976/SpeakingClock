// 函数: sub_40a9b0
// 地址: 0x40a9b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
char* esi = arg1
arg1.b = data_4af813
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg3)
__fnclex()
int16_t x87control
int16_t x87status_2
x87control, x87status_2 = __fldcw_memmem16(data_4aa86c)
sub_40aa67(esi)
int16_t ebx
ebx:1.b = *esi

if (ebx:1.b == 0x2b || ebx:1.b == 0x2d)
    esi = &esi[1]

char* ecx_1 = esi
long double x87_r7_1 = sub_40aa72(ebp, esi, float.t(0))
int32_t edx = 0

if (*esi == arg1.b)
    esi = &esi[1]
    int32_t edx_1
    long double st0_1
    st0_1, edx_1 = sub_40aa72(ebp, esi, x87_r7_1)
    x87_r7_1 = st0_1
    edx = neg.d(edx_1)

int16_t result

if (ecx_1 == esi)
    result = 0
else
    if ((*esi & 0xdf) == 0x45)
        esi = &esi[1]
        edx += sub_40aa8e(esi)
    
    sub_40aa67(esi)
    
    if (*esi != 0)
        result = 0
    else
        int32_t eax_2 = edx
        
        if (ebx.b == 1)
            eax_2 += 4
        
        long double x87_r7_2 = j_sub_403744(eax_2, x87_r7_1)
        
        if (ebx:1.b == 0x2d)
            x87_r7_2 = fneg(x87_r7_2)
        
        int16_t top_1
        bool c1
        
        if (ebx.b == 0)
            *arg2 = x87_r7_2
            top_1 = 0
        else
            *arg2 = int.q(arg4)
            top_1 = 1
            c1 = unimplemented  {fistp qword [edi], st0}
        
        bool c0
        bool c2
        bool c3
        
        if ((((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
                | (top_1 & 7) << 0xb) & 9) != 0)
            result = 0
        else
            result.b = 1

__fnclex()
int16_t x87control_1
int16_t x87status_4
x87control_1, x87status_4 = __fldcw_memmem16(temp0)
return result
