// 函数: sub_44b9d4
// 地址: 0x44b9d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
int32_t edi
int32_t var_2c = edi
char* cchText_2 = nullptr
enum DRAW_TEXT_FORMAT format = arg4
int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_1 = sub_44ea50(arg1)

if (eax_1 != 0 && sub_4502d0(eax_1) != 0)
    format = (format & ~DT_LEFT) | 2 | DT_RTLREADING

sub_404c20(&cchText_2, arg3)
char temp0 = format:1.b & 4
bool cond:0 = temp0 != 0

if (temp0 != 0)
    char* cchText_3 = cchText_2
    cond:0 = cchText_3 != 0
    
    if (cchText_3 == 0)
        sub_404e54(&cchText_2, 0x44bbdc)
    else
        char temp2_1 = *cchText_2
        cond:0 = temp2_1 != 0x26
        
        if (temp2_1 == 0x26)
            char temp3_1 = cchText_2[1]
            cond:0 = temp3_1 != 0
            
            if (temp3_1 == 0)
                sub_404e54(&cchText_2, 0x44bbdc)

sub_404fb0(cchText_2, u"-")

if (cond:0)
    sub_42bcec(arg2[5], 1)
    
    if (*(arg1 + 0x3a) != 0)
        void* edi_6 = arg2[3]
        sub_42b644(edi_6, sub_42b638(edi_6) | 1)
    
    if (*(arg1 + 0x39) == 0)
        if (arg5 == 0)
            OffsetRect(arg6, 1, 1)
            sub_42b2b0(arg2[3], 0xff000014)
            HDC hdc = sub_42c73c(arg2)
            char* cchText = cchText_2
            
            if (cchText != 0)
                cchText = *(cchText - 4)
            
            DrawTextA(hdc, sub_405018(cchText_2), cchText, arg6, format)
            OffsetRect(arg6, 0xffffffff, 0xffffffff)
        
        if (arg5 == 0)
            sub_42b2b0(arg2[3], 0xff000010)
        else if (sub_42ad8c(0xff00000d) != sub_42ad8c(0xff000010))
            sub_42b2b0(arg2[3], 0xff000010)
        else
            sub_42b2b0(arg2[3], 0xff000014)
    
    HDC hdc_1 = sub_42c73c(arg2)
    int32_t cchText_1 = cchText_2
    
    if (cchText_1 != 0)
        cchText_1 = *(cchText_1 - 4)
    
    DrawTextA(hdc_1, sub_405018(cchText_2), cchText_1, arg6, format)
else if ((format:1.b & 4) == 0)
    int32_t* esi_2 = arg6
    RECT qrc
    qrc.left = *esi_2
    var_1c
    void* edi_2 = &var_1c
    void* esi_3 = &esi_2[1]
    *edi_2 = *esi_3
    void* edi_3 = edi_2 + 4
    void* esi_4 = esi_3 + 4
    *edi_3 = *esi_4
    *(edi_3 + 4) = *(esi_4 + 4)
    qrc.top += 4
    DrawEdge(sub_42c73c(arg2), &qrc, EDGE_ETCHED, BF_TOP)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_30_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_44bbcb
char** result = &cchText_2
sub_404b88(result)
return result
