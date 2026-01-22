// 函数: sub_443274
// 地址: 0x443274
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t var_18 = 0
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x265) == 0)
    sub_4577d8(0, &var_18)

if (*(arg1 + 0x265) == 0 && var_18 == 0)
    int32_t esi_1 = arg1[0x98]
    
    if (*(arg1 + 0x259) != 0)
        esi_1 += arg1[0x97]
    
    if (*(arg1 + 0x25a) != 0)
        esi_1 += arg1[0x97]
    
    if (esi_1 s> 0)
        RECT rect
        rect.right = arg1[0x12]
        rect.bottom = arg1[0x13]
        
        if (*(*(arg2 + 8) + 0x10) != rect.right)
            rect.top = 0
            rect.left = rect.right - esi_1 - 1
            InvalidateRect(sub_45f888(arg1), &rect, 0xffffffff)
            esp = &ExceptionList
        
        if (*(*(arg2 + 8) + 0x14) != rect.bottom)
            rect.left = 0
            rect.top = rect.bottom - esi_1 - 1
            InvalidateRect(sub_45f888(arg1), &rect, 0xffffffff)
            esp = &ExceptionList
else
    (*(*arg1 + 0x80))()
    var_8
    esp = &var_8

sub_45dbc8(arg1, arg2)
esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_44336e
int32_t* result = &var_18
sub_404b88(result)
return result
