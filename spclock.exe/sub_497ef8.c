// 函数: sub_497ef8
// 地址: 0x497ef8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_11 = *arg2
void var_d
void* edi = &var_d
void* esi_1 = &arg2[1]
*edi = *esi_1
*(edi + 2) = *(esi_1 + 2)
int32_t var_18 = *arg1
void var_14
void* edi_3 = &var_14
void* esi_5 = &arg1[1]
*edi_3 = *esi_5
*(edi_3 + 2) = *(esi_5 + 2)
char i_1 = 7
int32_t* eax = &var_18
int32_t* esi_8 = &var_11
uint32_t result
char i

do
    result.b = *eax == *esi_8
    
    if (result.b == 0)
        break
    
    esi_8 += 1
    eax += 1
    i = i_1
    i_1 -= 1
while (i != 1)
return result
