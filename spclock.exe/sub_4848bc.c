// 函数: sub_4848bc
// 地址: 0x4848bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
int64_t* var_24 = nullptr
int32_t* esi_1 = arg2
void* result_1 = arg1
int32_t* var_34 = &var_4
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t* var_c = esi_1
int32_t* eax_1 = *(result_1 + 0x20)
int32_t* var_14

if (eax_1 == 0)
    *(*(result_1 + 0x18) + 0x2ac)
    arg2.b = 1
    var_14 = sub_403c38(0, arg2)
else
    var_14 = eax_1

int32_t* var_10 = var_14
int32_t* var_40 = &var_4
int32_t (* var_44)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lParam = &var_10
int32_t (* var_18)(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t* arg4) = sub_4847c4
int32_t var_1c = 0
int32_t eax_8 = sub_41c874(esi_1)
WPARAM wParam

if (*(result_1 + 0x1c) == 0)
    wParam = 2
else
    wParam = 1

SendMessageA(sub_45f888(*(result_1 + 0x18)), 0x449, wParam, &lParam)
void** esp = &ExceptionList

if (wParam == 2 && var_1c != 0)
    int32_t eax_14
    int32_t edx
    edx:eax_14 = sx.q(eax_8)
    sub_41c894(esi_1, eax_14, edx)
    WPARAM wParam_1
    
    if (*(result_1 + 0x1c) == 0)
        wParam_1 = 1
    else
        wParam_1 = 2
    
    SendMessageA(sub_45f888(*(result_1 + 0x18)), 0x449, wParam_1, &lParam)
    esp = &ExceptionList
    
    if (var_1c != 0)
        sub_406a30(data_4ac318, &var_24)
        int32_t edx_2
        edx_2.b = 1
        sub_40451c(sub_40ceb0(sub_4175f8+0x48, edx_2, var_24))
        esp = &result_1

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4849f9
void* result = result_1

if (*(result + 0x20) != 0)
    return result

return sub_403c68(var_14)
