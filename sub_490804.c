// 函数: sub_490804
// 地址: 0x490804
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_30 = &__saved_ebp
int32_t (* var_34)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* eax = sub_402ea8(0x2000)
fsbase->NtTib.ExceptionList = ExceptionList
sub_403578(eax, 0x2000, 0xff)
*arg2 = 0x40
int32_t ebx = 0
int16_t var_1a = 3
int16_t var_1c = 1
int16_t var_14 = 0
uint16_t var_16 = 0

while (ebx.w u< arg3)
    if (var_1a u> arg3)
        break
    
    if (var_14 u> 0xf)
        arg2[zx.d(var_1c)] = (var_16 u>> 8).b
        arg2[zx.d(var_1c) + 1] = var_16.b & 0xff
        var_1c = var_1a
        var_14 = 0
        var_1a += 2
    
    int16_t var_18 = 1
    
    while (true)
        uint32_t edi_2 = zx.d(ebx.w) + zx.d(var_18)
        
        if (*(arg1 + zx.d(ebx.w)) != *(arg1 + edi_2))
            break
        
        if (var_18 u>= 0xfff)
            break
        
        if (edi_2 u>= zx.d(arg3))
            break
        
        var_18 += 1
    
    if (var_18 u< 0x10)
        int16_t* var_34_1 = &var_18
        int16_t var_1e
        ExceptionList = &var_1e
        
        if (sub_490738(arg3, ebx.w, arg1, ExceptionList, var_34_1, eax) == 0)
            arg2[zx.d(var_1a)] = *(arg1 + zx.d(ebx.w))
            var_1a += 1
            ebx += 1
            var_16 <<= 1
        else
            int32_t eax_20
            eax_20.w = ebx.w - var_1e
            int16_t eax_21 = (eax_20 << 4).w + var_18 - 3
            arg2[zx.d(var_1a)] = (eax_21 u>> 8).b
            arg2[zx.d(var_1a) + 1] = eax_21.b & 0xff
            var_1a += 2
            ebx.w += var_18
            var_16 = var_16 * 2 + 1
    else
        arg2[zx.d(var_1a)] = 0
        arg2[zx.d(var_1a) + 1] = ((var_18 - 0x10) u>> 8).b
        arg2[zx.d(var_1a) + 2] = (var_18.b - 0x10) & 0xff
        arg2[zx.d(var_1a) + 3] = *(arg1 + zx.d(ebx.w))
        var_1a += 4
        ebx.w += var_18
        var_16 = var_16 * 2 + 1
    
    var_14 += 1

int16_t var_16_1 = var_16 << (0x10 - var_14.b)
arg2[zx.d(var_1c)] = (var_16_1 u>> 8).b
arg2[zx.d(var_1c) + 1] = var_16_1.b & 0xff

if (var_1a u> arg3)
    sub_4030d0(arg1, &arg2[1], zx.d(arg3))
    *arg2 = 0x80
    var_1a = arg3 + 1

if (eax != 0)
    sub_402ec4(eax)

return zx.d(var_1a)
