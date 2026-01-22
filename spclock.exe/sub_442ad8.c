// 函数: sub_442ad8
// 地址: 0x442ad8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_20 = ebx
uint32_t var_8 = arg1
int32_t ecx

if ((*(var_8 + 0x1c) & 0x10) != 0)
    int32_t* ebx_1 = *(var_8 + 0x190)
    sub_42b99c(ebx_1[4], 1)
    sub_42bcec(ebx_1[5], 1)
    ecx = sub_42c3d4(0, 0, ebx_1, *(var_8 + 0x4c), *(var_8 + 0x48))

char var_9 = *(var_8 + 0x1ac)
*(var_8 + 0x1ac) = 1
int32_t* var_24_2 = &var_4
int32_t (* var_28_2)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char eax_12
void* edx_2
eax_12, edx_2 = sub_433cec(ecx)
uint32_t eax_13

if (eax_12 == 0 || (*(var_8 + 0x1c) & 0x10) != 0)
    eax_13 = 0
else
    eax_13.b = 1

if (eax_13.b != 0)
    edx_2.b = 1
    int32_t* eax_15
    eax_15, edx_2 = sub_46bf14(var_8)
    
    if (eax_15 == 0)
        eax_13 = 0
    else
        char eax_18
        eax_18, edx_2 = sub_478924(sub_478638(eax_15))
        
        if (eax_18 == 0)
            eax_13 = 0
        else
            eax_13, edx_2 = sub_47895c(sub_478638(eax_15), var_8)
            
            if (eax_13.b != 0)
                eax_13.b = 1
            else
                eax_13 = 0

if (eax_13.b == 0)
    int32_t* ebx_3 = *(var_8 + 0x190)
    void var_1c
    sub_442904(var_8, &var_1c)
    sub_42c424(ebx_3, &var_1c, *(*(var_8 + 0x198) + 0xc))
else
    int32_t* var_30_1 = &var_4
    ebp_1 = sub_442a30(*(var_8 + 0x190), edx_2)
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_442bfd
void* result = ebp_1[-1]
*(result + 0x1ac) = *(ebp_1 - 5)
return result
