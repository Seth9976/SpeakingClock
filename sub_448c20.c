// 函数: sub_448c20
// 地址: 0x448c20
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

__andps_xmmxud_memxud(arg6, *(arg3 + 0x73))
*(arg3 + (arg4 << 1) + 0x61)
bool c = unimplemented  {imul eax, dword [ecx+ebp*2+0x61], 0x6c}
int32_t eflags
__outsd(arg2, *arg5, arg5, eflags)
void* const __return_addr_1 = __return_addr
void* ebp = arg7
void* ebx = arg8
void arg_1d
void* esp_1 = &arg_1d
int32_t var_4
TEB* fsbase
char* __return_addr_2
bool c_1
bool z

if (&var_4 == 0xffffffff)
    *(ebx + 0x7400fc7d) += 1
    __return_addr_2.b = arg11.b ^ 0x8b
    c_1 = false
    void* temp3_1 = ebp
    ebp += 1
    z = temp3_1 == 0xffffffff
label_448c9c:
    sub_4099cc(__return_addr_2)
    sub_4036e8()
    sub_403484(ebp - 0x104, 0x448d2c)
    
    if (not(z) && not(c_1))
        sub_404e54(ebp - 4, 0x448d38)
else
    __return_addr_2.b = adc.b(arg11.b, 0, c)
    *__return_addr_2 += __return_addr_2.b
    *__return_addr_2 = &__return_addr_2[*__return_addr_2]
    *__return_addr_2 += __return_addr_2.b
    *__return_addr_2 += __return_addr_2.b
    *(ebp - 0x74aaffc0) += arg10
    __return_addr_2.b = __in_al_dx(arg9.w, eflags)
    *0x4003f04 = ebx
    *0x4003f00 = __return_addr_1
    int16_t cs
    *0x4003efc = zx.d(cs)
    *(ebp - 0x108) = 0
    *(ebp - 4) = 0
    __return_addr_1 = __return_addr_2
    *0x4003ef8 = ebp
    *0x4003ef4 = j_sub_40443c
    *0x4003ef0 = fsbase->NtTib.ExceptionList
    esp_1 = 0x4003ef0
    fsbase->NtTib.ExceptionList = 0x4003ef0
    ebx = 0x10
    
    if (sub_475aec(*data_4ac2fc) != 0)
        ebx = 0x100010
    
    sub_404c20(ebp - 4, *(arg9 + 4))
    int32_t temp4_1 = *(ebp - 4)
    c_1 = temp4_1 u< 0
    z = temp4_1 == 0
    
    if (not(z))
        __return_addr_2 = *(ebp - 4)
        goto label_448c9c
*(esp_1 - 4) = ebx
sub_4765cc(*data_4ac2fc, ebp - 0x108)
*(esp_1 - 8) = sub_405018(*(ebp - 0x108))
*(esp_1 - 0xc) = sub_405018(*(ebp - 4))
*(esp_1 - 0x10) = __return_addr_1
MessageBoxA()
*(esp_1 + 8)
fsbase->NtTib.ExceptionList = *esp_1
*(esp_1 + 8) = sub_448d23
sub_404b88(ebp - 0x108)
sub_404b88(ebp - 4)
return ebp - 4
