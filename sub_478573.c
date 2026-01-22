// 函数: sub_478573
// 地址: 0x478573
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp1 = *(arg4 + 0x73)
*(arg4 + 0x73) += arg2.b

if (temp1 + arg2.b u< temp1)
    return sub_4785ac(arg1) __tailcall

arg3:1.b ^= *arg5
int32_t eflags
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg6, arg2.w, eflags)
*edi = temp0
uint8_t* edi_1
uint8_t temp0_1
temp0_1, edi_1 = __insb(edi, arg2.w, eflags)
*edi_1 = temp0_1
char temp2 = *arg1
*arg1 += arg1.b
bool c = temp2 + arg1.b u< temp2
bool p = unimplemented  {add byte [eax], al}
bool a = unimplemented  {add byte [eax], al}
bool z = temp2 == neg.b(arg1.b)
bool s = temp2 + arg1.b s< 0
HWND* ebx
HWND* var_4 = ebx
int32_t* esp_1 = &var_4
int32_t result
char* eax
uint32_t ecx
int32_t edx_1
HWND ebp
char* esi_2
HWND* edi_2
bool cond:2_1

if (z)
    edi_2 = arg2
    result = 0
    HWND eax_1
    eax_1, ecx, edx_1 = GetCapture()
    
    if (eax_1 == 0)
        ebp = *edi_2
        eax = *(arg1 + 0x44)
        
        if (eax != 0)
            cond:2_1 = ebp != *(eax + 0x29c)
        label_4785f0:
            
            if (not(cond:2_1))
                goto label_4785f2
        
        esi_2 = sub_454230(ebp, edx_1, ecx)
        
        if (esi_2 == 0)
            *(esp_1 - 4) = ebp
            
            if (GetParent() != 0)
                jump(sub_4785cc+0x43)
        
        goto label_47861c
else
    edi_2 = var_4
    ebp = arg7
    result = arg8
    edx_1 = arg9
    ecx = arg10
    HWND* arg_18
    eax = arg_18
    void arg_1c
    esp_1 = &arg_1c
    
    if (s)
        if (c)
            char temp3_1 = *eax
            *eax += eax.b
            cond:2_1 = temp3_1 != neg.b(eax.b)
            goto label_4785f0
        
        arg_18 = edi_2
        *(__return_addr + 0x64)
        
        if (z)
            undefined
        
        jump("ibutes")
    
    bool d
    arg_18 = (add_overflow(temp2, arg1.b) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (s ? 1 : 0) << 7
        | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c ? 1 : 0)
    esp_1 = &arg_18
    eax.b += *eax
    ebp->__offset(0x4).b += edx_1:1.b
label_4785f2:
    esi_2 = eax
label_47861c:
    
    if (esi_2 != 0)
        int32_t* eax_5 = esi_2
        esi_2.w = 0xffb1
        result = sub_403e64(eax_5, esi_2, edi_2)
*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return result
