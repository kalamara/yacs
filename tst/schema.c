#include "config.h"
#include "schema.h"
/**
 *@file schema.c
 *@brief configuration schema 
*/

struct entry SimSchema[N_SIM_VARS] = {
    {
        .type_tag = ENTRY_STR,
        .name = "INPUT",
        .e = {
            .scalar_str = "simin.txt" 
        }          
    },
    {
        .type_tag = ENTRY_STR,
        .name = "OUTPUT",
        .e = {
            .scalar_str = "simout.txt"
        }          
    },
};

struct entry SubdevSchema[N_SUBDEV_VARS] = {
    {
        .type_tag = ENTRY_INT,
        .name = "IN",
        .e = {
            .scalar_int = -1 
        }          
    },
    {
        .type_tag = ENTRY_INT,
        .name = "OUT",
        .e = {
            .scalar_int = -1
        }          
    },
    {
        .type_tag = ENTRY_INT,
        .name = "ADC",
        .e = {
            .scalar_int = -1 
        }          
    },
    {
        .type_tag = ENTRY_INT,
        .name = "DAC",
        .e = {
            .scalar_int = -1
        }          
    },
};



struct entry ComediSchema[N_COMEDI_VARS] = {
    {
        .type_tag = ENTRY_INT,
        .name = "FILE",
        .e = {
            .scalar_int = 0 
        }          
    },
    {
        .type_tag = ENTRY_MAP,
        .name = "SUBDEV",
        .e = {
            .conf = NULL
        }          
    },
};
    
struct entry HwSchema[N_HW_VARS] = {
    {
        .type_tag = ENTRY_STR,
        .name = "LABEL",
        .e = {
            .scalar_str = "DRY" 
        }          
    },
    {
        .type_tag = ENTRY_MAP,
        .name = "IFACE",
        .e = {
            .conf = NULL
        }          
    },
};

struct sequence default_seq = {
        .size = 2
};

struct entry ConfigSchema[N_CONFIG_VARIABLES] = {
    {//CONFIG_STATUS,
         .type_tag = ENTRY_STR,
         .name = "STATUS",
         .e = {
                .scalar_str = "STOPPED"
         }
    },
    {//CONFIG_STEP,
         .type_tag = ENTRY_INT,
         .name = "STEP",
         .e = {
                .scalar_int = 100
         }
    },
    {//CONFIG_HW,
         .type_tag = ENTRY_MAP,
         .name = "HW",
         .e = {
              .conf = NULL//&hw_config
         }
    },
    {//CONFIG_PROGRAM
         .type_tag = ENTRY_SEQ,
         .name = "PROGRAM",
         .e = {
              .seq = &default_seq
         }
    },
    {//CONFIG_AI
         .type_tag = ENTRY_SEQ,
         .name = "AI",
         .e = {
                .seq = &default_seq
         }
    },
    {//CONFIG_AQ
         .type_tag = ENTRY_SEQ,
         .name = "AQ",
         .e = {
              .seq = &default_seq
         }
    },
    {//CONFIG_DI
         .type_tag = ENTRY_SEQ,
         .name = "DI",
         .e = {
                .seq = &default_seq
         }
    },
    {//CONFIG_DQ
         .type_tag = ENTRY_SEQ,
         .name = "DQ",
         .e = {
              .seq = &default_seq
         }
    },
    {//CONFIG_MVAR
         .type_tag = ENTRY_SEQ,
         .name = "MVAR",
         .e = {
              .seq = &default_seq
         }
    },
    {//CONFIG_MREG
         .type_tag = ENTRY_SEQ,
         .name = "MREG",
         .e = {
                .seq = &default_seq
         }
    },
    {//CONFIG_TIMERS
         .type_tag = ENTRY_SEQ,
         .name = "TIMERS",
         .e = {
                .seq = &default_seq
         }
    },
    {//CONFIG_PULSES
         .type_tag = ENTRY_SEQ,
         .name = "PULSES",
         .e = {
              .seq = &default_seq
         }
    },
};

