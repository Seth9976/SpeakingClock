// 函数: sub_42b2f0
// 地址: 0x42b2f0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_58 = ebx
int32_t esi
int32_t var_5c = esi
int32_t edi
int32_t var_60 = edi
int32_t var_54 = 0
int32_t var_50 = 0
int32_t var_4c = 0
int32_t cchCount1_1 = 0
int32_t* var_64 = &var_4
int32_t (* var_68)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
void* eax = *(arg1 + 0x10)

if (*(eax + 8) != 0)
    *(eax + 8)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_64_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_42b513
    return sub_404bac(&var_54, 4)

int32_t ecx = sub_42a578(data_4b1a94)
int32_t* var_70 = &var_4
int32_t (* var_74)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(eax + 8) == 0)
    LOGFONTA lplf
    lplf.lfHeight = *(eax + 0x14)
    lplf.lfWidth = 0
    int32_t eax_7 = *(eax + 0x18)
    lplf.lfEscapement = eax_7
    lplf.lfOrientation = eax_7
    
    if ((*(eax + 0x1d) & 1) == 0)
        lplf.lfWeight = 0x190
    else
        lplf.lfWeight = 0x2bc
    
    void* eax_9
    eax_9.b = (*(eax + 0x1d) & 2) != 0
    lplf.lfItalic = eax_9.b
    void* eax_10
    eax_10.b = (*(eax + 0x1d) & 4) != 0
    lplf.lfUnderline = eax_10.b
    void* eax_11
    eax_11.b = (*(eax + 0x1d) & 8) != 0
    lplf.lfStrikeOut = eax_11.b
    char eax_13 = *(eax + 0x1e)
    
    if (eax_13 != 1 || data_4aac4e == 1)
        lplf.lfCharSet = eax_13
    else
        lplf.lfCharSet = data_4aac4e
    
    int32_t ecx_1 = sub_404dec(ecx, eax + 0x1f)
    int32_t cchCount1 = cchCount1_1
    
    if (cchCount1 != 0)
        cchCount1 = *(cchCount1 - 4)
    
    char* lpString2 = sub_405018("Default")
    sub_404dec(ecx_1, eax + 0x1f)
    enum COMPARESTRING_RESULT eax_17
    int32_t ecx_2
    eax_17, ecx_2 = CompareStringA(0x400, 1, sub_405018(var_4c), cchCount1, lpString2, 7)
    var_28
    
    if (eax_17 != 2)
        sub_404dec(ecx_2, eax + 0x1f)
        sub_409d0c(&var_28, var_54)
    else
        sub_404dec(ecx_2, "\rMS Sans Serif")
        sub_409d0c(&var_28, var_50)
    
    if (*data_4ac4d0 == 1 && sub_4328bc() == 0x80 && sub_42b2c4(eax + 0x10) != 0)
        lplf.lfCharSet = 0x80
    
    lplf.lfQuality = 0
    
    if (lplf.lfOrientation == 0)
        lplf.lfOutPrecision = 0
    else
        lplf.lfOutPrecision = 7
    
    lplf.lfClipPrecision = 0
    char eax_27 = sub_42b67c(arg1)
    
    if (eax_27 == 1)
        lplf.lfPitchAndFamily = 2
    else if (eax_27 == 2)
        lplf.lfPitchAndFamily = 1
    else
        lplf.lfPitchAndFamily = 0
    
    *(eax + 8) = CreateFontIndirectA(&lplf)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_70_1 = 0x42b4eb
return sub_42a584(data_4b1a94)
