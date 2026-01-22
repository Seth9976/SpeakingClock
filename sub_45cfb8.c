// 函数: sub_45cfb8
// 地址: 0x45cfb8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* lpPaint_1
void* lpPaint = lpPaint_1
int32_t ebx
int32_t var_58 = ebx
int32_t esi
int32_t var_5c = esi
int32_t edi
int32_t var_60 = edi
HDC hdc = *(arg2 + 4)
PAINTSTRUCT paint

if (hdc == 0)
    hdc = BeginPaint(sub_45f888(arg1), &paint)
int32_t* var_64_2 = &lpPaint
int32_t (* var_68_2)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1

if (arg1[0x73] == 0)
    (*(*arg1 + 0xc4))()
    void* ebp = sub_45d150(arg1, hdc, 0)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_45d11e
    BOOL result = *(ebp - 8)
    
    if (*(result + 4) != 0)
        return result
    
    lpPaint = ebp - 0x50
    return EndPaint(sub_45f888(*(ebp - 4)), lpPaint)

int32_t nSavedDC = SaveDC(hdc)
void** var_70_1 = &lpPaint
int32_t (* var_74)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
enum GDI_REGION_TYPE edi_1 = SIMPLEREGION
int32_t ebx_2 = *(arg1[0x73] + 8) - 1

if (ebx_2 s>= 0)
    int32_t i_1 = ebx_2 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        void* eax_12 = sub_41a0f4(arg1[0x73], esi_1)
        
        if (*(eax_12 + 0x57) != 0
            && ((*(eax_12 + 0x1c) & 0x10) == 0 || (*(eax_12 + 0x55) & 8) == 0))
        label_45d07f:
            
            if ((*(eax_12 + 0x50) & 0x40) != 0)
                int32_t left = *(eax_12 + 0x40)
                edi_1 = ExcludeClipRect(hdc, left, *(eax_12 + 0x44), left + *(eax_12 + 0x48), 
                    *(eax_12 + 0x44) + *(eax_12 + 0x4c))
                
                if (edi_1 == NULLREGION)
                    break
        else if ((*(eax_12 + 0x1c) & 0x10) != 0 && (*(eax_12 + 0x55) & 8) == 0
                && (*(eax_12 + 0x51) & 4) == 0)
            goto label_45d07f
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

if (edi_1 != NULLREGION)
    (*(*arg1 + 0xc4))()

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_70_2 = 0x45d0e1
ExceptionList = hdc
return RestoreDC(ExceptionList, nSavedDC)
