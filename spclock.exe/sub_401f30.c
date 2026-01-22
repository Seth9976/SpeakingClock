// 函数: sub_401f30
// 地址: 0x401f30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ecx_14 = arg1[-1]
int32_t edi

if ((ecx_14.b & 7) == 0)
    void* ebx = *ecx_14
    int32_t ecx_1 = zx.d(*(ebx + 2)) - 4
    
    if (ecx_1 u< arg2)
        int32_t var_c = edi
        int32_t** eax_7 = sub_4019b4((adc.d(0, 0xffffffff, ecx_1 * 2 + 0x20 u< arg2)
            & (ecx_1 * 2 + 0x20 - arg2)) + arg2)
        
        if (eax_7 != 0)
            if (arg2 u> 0x40a2c)
                eax_7[-2] = arg2
            
            *(ebx + 2)
            (*(ebx + 0x1c))()
            sub_401d38(arg1)
        
        return 
    
    if ((arg2 << 2) + 0x40 u< ecx_1)
        int32_t** eax_1 = sub_4019b4(arg2)
        
        if (eax_1 != 0)
            sub_401578(arg1, eax_1, arg2)
            sub_401d38(arg1)
    
    return 

if ((ecx_14.b & 5) != 0)
    if ((ecx_14.b & 3) == 0)
        return sub_401868(arg1, arg2) __tailcall
    
    return 

void* ecx_7 = ecx_14 & 0xfffffff0
int32_t var_c_1 = edi
int32_t* edi_4 = ecx_7 + arg1
void* ecx_8 = ecx_7 - 4
void* ebx_5 = ecx_14 & 0xf

if (arg2 u<= ecx_8)
    if (arg2 * 2 u< ecx_8)
        if (arg2 u>= 0xb2c)
        label_402027:
            void* ecx_10 = ecx_8 + 4 - (((arg2 + 0xd3) & 0xffffff00) + 0x30)
            
            if (data_4ad049 != 0)
                while (true)
                    bool z_1
                    
                    if (0 == data_4ad714)
                        data_4ad714 = 0
                        z_1 = true
                    else
                        int32_t eax_10
                        eax_10.b = data_4ad714
                        z_1 = false
                    
                    if (z_1)
                        break
                    
                    if (data_4ad5b1 == 0)
                        Sleep(0)
                        bool z_2
                        
                        if (0 == data_4ad714)
                            data_4ad714 = 0
                            z_2 = true
                        else
                            int32_t eax_11
                            eax_11.b = data_4ad714
                            z_2 = false
                        
                        if (z_2)
                            break
                        
                        Sleep(0xa)
                
                ebx_5 = 0xf & arg1[-1]
            
            arg1[-1] = ebx_5 | (((arg2 + 0xd3) & 0xffffff00) + 0x30)
            void* ebx_7 = ecx_10
            int32_t edx_2 = edi_4[-1]
            
            if ((edx_2.b & 1) != 0)
                int32_t* eax_12 = edi_4
                int32_t edx_4 = edx_2 & 0xfffffff0
                ebx_7 += edx_4
                edi_4 += edx_4
                
                if (edx_4 u>= 0xb30)
                    ecx_10 = sub_401594(eax_12)
            else
                edi_4[-1] = edx_2 | 8
            
            edi_4[-2] = ebx_7
            *(arg1 + ((arg2 + 0xd3) & 0xffffff00) + 0x30 - 4) = ebx_7 + 3
            
            if (ebx_7 u>= 0xb30)
                sub_4015d4(arg1 + ((arg2 + 0xd3) & 0xffffff00) + 0x30, ebx_7, ecx_10)
            
            data_4ad714 = 0
            return 
        
        if (arg2 u< 0x2cc)
            int32_t** eax_17 = sub_4019b4(arg2)
            
            if (eax_17 != 0)
                sub_401578(arg1, eax_17, arg2)
                sub_401d38(arg1)
            
            return 
        
        arg2 = 0xb2c
        
        if (ecx_8 u> 0xb2c)
            goto label_402027
    
    return 

int32_t eax_20 = edi_4[-1]

if ((eax_20.b & 1) == 0)
    goto label_4021f5

int32_t eax_21 = eax_20 & 0xfffffff0
void* ebp_6 = ecx_8 + eax_21

if (arg2 u> ebp_6)
    goto label_4021f5

int32_t eax_24

if (data_4ad049 != 0)
    while (true)
        bool z_3
        
        if (0 == data_4ad714)
            data_4ad714 = 0
            z_3 = true
        else
            int32_t eax_22
            eax_22.b = data_4ad714
            z_3 = false
        
        if (z_3)
            break
        
        if (data_4ad5b1 == 0)
            Sleep(0)
            bool z_4
            
            if (0 == data_4ad714)
                data_4ad714 = 0
                z_4 = true
            else
                int32_t eax_23
                eax_23.b = data_4ad714
                z_4 = false
            
            if (z_4)
                break
            
            Sleep(0xa)
    
    ebx_5 = 0xf & arg1[-1]
    eax_24 = edi_4[-1]
    
    if ((eax_24.b & 1) != 0)
        eax_21 = eax_24 & 0xfffffff0
        ebp_6 = ecx_8 + eax_21

if (data_4ad049 != 0 && ((eax_24.b & 1) == 0 || arg2 u> ebp_6))
    data_4ad714 = 0
label_4021f5:
    void* eax_38 = (ecx_8 u>> 2) + ecx_8
    void* eax_41 = ((eax_38 - arg2) & adc.d(0, 0xffffffff, eax_38 u< arg2)) + arg2
    int32_t** eax_35 = sub_4019b4(eax_41)
    
    if (eax_35 != 0)
        if (eax_41 u> 0x40a2c)
            eax_35[-2] = arg2
        
        sub_401548(arg1, eax_35, ecx_8)
        sub_401d38(arg1)
else
    if (eax_21 u>= 0xb30)
        sub_401594(edi_4)
    
    void* eax_28 = (ecx_8 u>> 2) + ecx_8
    void* edx_8 = ebp_6 + 4 - (((arg2 + ((eax_28 - arg2) & adc.d(0, 0xffffffff, eax_28 u< arg2))
        + 0xd3) & 0xffffff00) + 0x30)
    void* ebp_7
    
    if (ebp_6 + 4 u> ((arg2 + ((eax_28 - arg2) & adc.d(0, 0xffffffff, eax_28 u< arg2)) + 0xd3)
            & 0xffffff00) + 0x30)
        *(arg1 + ebp_6 - 4) = edx_8
        *(((arg2 + ((eax_28 - arg2) & adc.d(0, 0xffffffff, eax_28 u< arg2)) + 0xd3) & 0xffffff00)
            + 0x30 + arg1 - 4) = edx_8 + 3
        ebp_7 = ((arg2 + ((eax_28 - arg2) & adc.d(0, 0xffffffff, eax_28 u< arg2)) + 0xd3)
            & 0xffffff00) + 0x30
        
        if (edx_8 u>= 0xb30)
            sub_4015d4(
                ((arg2 + ((eax_28 - arg2) & adc.d(0, 0xffffffff, eax_28 u< arg2)) + 0xd3)
                    & 0xffffff00) + 0x30 + arg1, 
                edx_8, ecx_8)
    else
        *(arg1 + ebp_6) &= 0xfffffff7
        ebp_7 = ebp_6 + 4
    
    arg1[-1] = ebp_7 | ebx_5
    data_4ad714 = 0
