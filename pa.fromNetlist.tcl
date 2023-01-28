
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name RTC6701_spi_controller -dir "F:/Edu/FPGA/alireza_project/RTC6701_spi_controller/planAhead_run_1" -part xc6slx9tqg144-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "F:/Edu/FPGA/alireza_project/RTC6701_spi_controller/top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {F:/Edu/FPGA/alireza_project/RTC6701_spi_controller} {ipcore_dir} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "ucf.ucf" [current_fileset -constrset]
add_files [list {ucf.ucf}] -fileset [get_property constrset [current_run]]
link_design
