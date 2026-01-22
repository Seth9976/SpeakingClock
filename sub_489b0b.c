// 函数: sub_489b0b
// 地址: 0x489b0b
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 = *arg1
*arg1 += arg1.b
int32_t edi
edi.w = __return_addr.w
int32_t esi
esi.w = __return_addr:2.w
int32_t ebp
ebp.w = arg5
void arg_8
int16_t* esp
esp.w = &arg_8
void* ebx
ebx.w = *esp
arg2.w = esp[1]
arg3.w = esp[2]
void* result
result.w = esp[3]

if (arg1 != 0x9abbee00)
    if (arg3 != *(ebx + 0x5c) && arg3 s> 0)
        *(ebx + 0x5c) = arg3
        jump(0x489ba7)
    
    *(esp + 8)
    *(esp + 0xc)
    return result

if (arg1 == 0x9abbee00)
    return divs.dp.d(arg2:ebx, edi)

*(result + 0x65)
bool c = unimplemented  {imul edi, dword [eax+0x65], 0x726f466c}
int32_t eflags
int32_t* edi_2
int32_t temp0
temp0, edi_2 = __insd(*(result + 0x65) * 0x726f466c, arg2.w, eflags)
*edi_2 = temp0
int32_t edi_3 = *(esp + 8)
void* esp_1 = &esp[6]
uint16_t* esi_1 = *esp_1
void* ebx_1 = *(esp_1 + 0xc)
void* edx = *(esp_1 + 0x10)
int32_t ecx = *(esp_1 + 0x14)
int32_t eax = *(esp_1 + 0x18)

if (arg1 != 0x9abbee00)
    *(ebx_1 - 0x75) += edx.b
    *(ebx_1 - 0x5efe4d35)
    void* eax_2
    eax_2.b = (esp_1 + 0x1c).b + ecx:1.b
    __outsd(edx.w + 1, *esi_1, esi_1, eflags)
    undefined

*(edx - 0x68f7ffb8) = adc.b(*(edx - 0x68f7ffb8), ebx_1.b, c)
*esi_1 += eax.b - 1
*(esp_1 + 0x1c + (ecx << 1)) += ecx.b
void* esp_4 = esp_1 + 0x1d
int32_t* edi_5
int32_t temp0_4
temp0_4, edi_5 = __insd(edi_3, edx.w, eflags)
*edi_5 = temp0_4
void* ebp_1 = *(esp_4 + 8)
int32_t* ecx_1 = *(esp_4 + 0x18)
char* eax_7 = *(esp_4 + 0x1c) + 1
*eax_7 += (*(esp_4 + 0x14)).b
*(esp_4 + 0x1b) = eax_7
*eax_7 += eax_7.b
*ecx_1 += 1
*eax_7 += eax_7.b
*eax_7 += eax_7.b
*eax_7 += eax_7.b
*eax_7 = *eax_7
*eax_7 += eax_7.b
char temp4 = eax_7.b
eax_7.b = eax_7.b
int32_t temp5 = adc.d(*(ebp_1 + 0x66), eax_7, temp4 u>= 0)
*(ebp_1 + 0x66) = temp5
*(esp_4 + 0x1b)
*(esp_4 + 0x1f)
*(esp_4 + 0x23)
*(esp_4 + 0x2b)
*(esp_4 + 0x2f)
*(esp_4 + 0x33)
*(esp_4 + 0x37)

if (temp5 != 0)
    jump(sub_489b48+0x19)

jump("tCompressed")
