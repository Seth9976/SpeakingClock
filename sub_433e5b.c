// 函数: sub_433e5b
// 地址: 0x433e5b
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += 1
*arg1 += arg1.b
int32_t eflags
int32_t entry_ebx
int32_t esp
bool p_1
bool a_1
bool z_1
bool s_1
bool o_1

do
    *arg5 += arg1.b
    *(esp - 4) = entry_ebx
    *(esp - 8) = 0x6a624f6c
    uint8_t temp0_1
    temp0_1, arg6 = __insb(arg6, arg2.w, eflags)
    *arg6 = temp0_1
    entry_ebx += 1
    *arg6 += arg3.b
    arg3 |= *(arg3 + 0x46)
    arg4 = *(arg4 + 0x44) * 0x6f6c6169
    arg1 = sx.d(arg1.w)
    *(esp - 0xc) = arg3
    esp -= 0xc
    int32_t temp1_1 = arg2
    arg2 += 1
    p_1 = unimplemented  {inc edx}
    a_1 = unimplemented  {inc edx}
    z_1 = temp1_1 == 0xffffffff
    s_1 = temp1_1 + 1 s< 0
    o_1 = add_overflow(temp1_1, 1)
while (z_1 || s_1 != o_1)

bool d
*(esp - 4) = (o_1 ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (s_1 ? 1 : 0) << 7 | (z_1 ? 1 : 0) << 6
    | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2
arg1.b = __in_al_immb(7, eflags)
void* ebp = *(esp - 4)
int32_t ebx_1 = adc.d(entry_ebx + 1, *(arg6 - 0x38), false)
int16_t es
*(esp - 4) = zx.d(es)
*(esp - 8) = ebx_1
*(esp - 0xc) = 0x6a624f6c
*(esp - 0xc)
ebx_1:1.b *= 2
*(ebp - 0x74aaffc0) -= 1
arg1.b = __in_al_dx(arg2.w, eflags)
*(esp - 0xe) = arg3
*(esp - 0x12) = ebx_1
*(esp - 0x16) = arg5
*(esp - 0x1a) = arg6
*(ebp - 4) = arg3
int32_t result
void* esp_17

if (data_4b1b98 == 0)
    *(esp - 0x1e) = "shell32.dll"
    esp_17 = esp - 0x1a
    data_4b1b94 = GetModuleHandleA()
    result = 0x80004001
    
    if (data_4b1b94 u> 0)
        *(esp_17 - 4) = "SHCreateItemFromParsingName"
        *(esp_17 - 8) = data_4b1b94
        data_4b1b98 = GetProcAddress()
        
        if (data_4b1b98 != 0)
            *(esp_17 - 4) = *(ebp + 8)
            *(esp_17 - 8) = *(ebp - 4)
            *(esp_17 - 0xc) = arg2
            *(esp_17 - 0x10) = arg1
            esp_17 += 0x12
            result = data_4b1b98()
else
    *(esp - 0x1e) = *(ebp + 8)
    *(esp - 0x22) = *(ebp - 4)
    *(esp - 0x26) = arg2
    *(esp - 0x2a) = arg1
    esp_17 = esp - 8
    result = data_4b1b98()

*esp_17
*(esp_17 + 4)
*(esp_17 + 8)
*(esp_17 + 0xc)
*(esp_17 + 0x10)
return result
