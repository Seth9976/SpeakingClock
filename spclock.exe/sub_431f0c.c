// 函数: sub_431f0c
// 地址: 0x431f0c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t var_42c
sub_403578(&var_42c, 0xe, 0)
var_42c = 0x4d42
int32_t* ebp = *(arg1 + 0x6c)
int32_t var_43c

if (ebp != 0)
    var_43c = (**ebp)()
    
    if (arg3 != 0)
        sub_41cad8(arg2, &var_43c, 4)
    
    int32_t* ebx_1 = *(arg1 + 0x6c)
    (**ebx_1)()
    ebx_1[1]
    return (*(*arg2 + 0x10))()

sub_430e14(arg1)
void* ebp_1 = arg1
var_43c = 0
int32_t result = *(ebp_1 + 0x14)
uint32_t var_438
void prgbq

if (result != 0)
    int32_t var_434
    sub_42d994(&var_43c, &var_434, *(ebp_1 + 0x50))
    
    if (*(ebp_1 + 0x70) != 0)
        var_434 = 0xc
        int16_t eax_10 = *(ebp_1 + 0x3e)
        
        if (eax_10 u<= 8)
            var_434 += (1 << eax_10.b) * 3
    
    var_43c += var_434 + 0xe
    sub_403578(&var_42c, 0xe, 0)
    var_42c = 0x4d42
    sub_42c818(sub_430bec(arg1), 1)
    HGDIOBJ h = SelectObject(*(arg1 + 4), *(ebp_1 + 0x14))
    sub_42cb40(h)
    var_438 = GetDIBColorTable(*(arg1 + 4), 0, 0x100, &prgbq)
    SelectObject(*(arg1 + 4), h)
    uint32_t eax_27 = *(ebp_1 + 0x50)
    
    if (eax_27 u> 0 && eax_27 u< var_438)
        var_438 = eax_27
    
    if (*(ebp_1 + 0x70) == 0 && var_438 == 0 && *(ebp_1 + 0x10) != 0 && *(ebp_1 + 0x71) == 0)
        var_438 = sub_42d2dc(*(ebp_1 + 0x10), &prgbq, 0xff)
        
        if (*(ebp_1 + 0x3e) u> 8)
            uint32_t eax_32 = var_438 * 4
            var_43c += eax_32
            var_434 += eax_32
    
    int32_t var_42a_1 = var_43c
    result = var_434 + 0xe
    int32_t result_1 = result

if (arg3 != 0)
    result = sub_41cad8(arg2, &var_43c, 4)

if (var_43c == 0)
    return result

sub_42fcf8(ebp_1 + 0x18)

if (var_438 != 0)
    int32_t eax_37 = *(ebp_1 + 0x50)
    
    if (eax_37 == 0 || eax_37 != var_438)
        *(ebp_1 + 0x50) = var_438
    
    if (*(ebp_1 + 0x70) != 0)
        sub_42cfb8(&prgbq, &var_438)

if (*(ebp_1 + 0x70) == 0)
    sub_41cad8(arg2, &var_42c, 0xe)
    sub_41cad8(arg2, ebp_1 + 0x30, 0x28)
    
    if (*(ebp_1 + 0x3e) u> 8 && (*(ebp_1 + 0x40) & 3) != 0)
        sub_41cad8(arg2, ebp_1 + 0x58, 0xc)
else
    int32_t var_41e = 0xc
    int16_t var_41a_1 = *(ebp_1 + 0x34)
    int16_t var_418_1 = *(ebp_1 + 0x38)
    int16_t var_416_1 = 1
    int16_t var_414_1 = *(ebp_1 + 0x3e)
    sub_41cad8(arg2, &var_42c, 0xe)
    sub_41cad8(arg2, &var_41e, 0xc)

sub_41cad8(arg2, &prgbq, zx.d(*(zx.d(*(ebp_1 + 0x70)) + 0x4aaf10)) * var_438)
return sub_41cad8(arg2, *(ebp_1 + 0x2c), *(ebp_1 + 0x44))
