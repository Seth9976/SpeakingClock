// 函数: sub_46aa50
// 地址: 0x46aa50
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t* esp_1 = &var_4
int32_t eflags
int16_t temp0
temp0, eflags = __arpl_memw_gpr16(*(arg2 + 0x6f), arg3)
*(arg2 + 0x6f) = temp0
uint8_t* edi
uint8_t temp0_1
temp0_1, edi = __insb(arg4, arg2.w, eflags)
*edi = temp0_1
uint8_t* edi_1
uint8_t temp0_2
temp0_2, edi_1 = __insb(edi, arg2.w, eflags)
*edi_1 = temp0_2
int32_t eax_1
int16_t edx
int16_t ebx_1
void* ebp_1
int32_t esi
void* edi_2
bool c

do
    edi_2 = *esp_1
    esi = esp_1[1]
    ebp_1 = esp_1[2]
    ebx_1 = (esp_1[4]).w
    edx = (esp_1[5]).w
    esp_1[6]
    eax_1 = esp_1[7]
    esp_1 = &esp_1[8]
while (c)

*0x2880042 = eax_1
ebx_1:1.b *= 2
*esi
*0xcc0046f7 -= 9
*0x15044726 -= 9
int32_t eflags_1
int16_t temp0_3
temp0_3, eflags_1 = __arpl_memw_gpr16(*(edi_2 + 0x6e), ebp_1.w)
*(edi_2 + 0x6e) = temp0_3
*0xcc0046f7 += edx.b
*(ebp_1 + 2) += edx:1.b
char temp1 = ebx_1:1.b
char temp2 = ebx_1:1.b
ebx_1:1.b *= 2

if (temp1 != neg.b(temp2))
    undefined

jump(0x46aa82)
