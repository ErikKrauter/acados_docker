classdef acados_sim_opts < handle
	


	properties
		compile_mex
		codgen_model
		num_stages
		num_steps
		method
		sens_forw
		sens_adj
		sens_hess
		opts_struct
	end % properties



	methods
		

		function obj = acados_sim_opts()
			obj.compile_mex = 'true';
			obj.codgen_model = 'true';
			obj.method = 'irk';
			obj.num_stages = 4;
			obj.num_steps = 1;
			obj.sens_forw = 'false';
			obj.sens_adj = 'false';
			obj.sens_hess = 'false';
			obj.opts_struct = struct;
			obj.opts_struct.compile_mex = obj.compile_mex;
			obj.opts_struct.codgen_model = obj.codgen_model;
			obj.opts_struct.method = obj.method;
			obj.opts_struct.num_stages = obj.num_stages;
			obj.opts_struct.num_steps = obj.num_steps;
			obj.opts_struct.sens_forw = obj.sens_forw;
			obj.opts_struct.sens_adj = obj.sens_adj;
			obj.opts_struct.sens_hess = obj.sens_hess;
		end


		function obj = set(obj, field, value)
			if (strcmp(field, 'compile_mex'))
				obj.compile_mex = value;
				obj.opts_struct.compile_mex = value;
			elseif (strcmp(field, 'codgen_model'))
				obj.codgen_model = value;
				obj.opts_struct.codgen_model = value;
			elseif (strcmp(field, 'num_stages'))
				obj.num_stages = value;
				obj.opts_struct.num_stages = value;
			elseif (strcmp(field, 'num_steps'))
				obj.num_steps = value;
				obj.opts_struct.num_steps = value;
			elseif (strcmp(field, 'method'))
				obj.method = value;
				obj.opts_struct.method = value;
			elseif (strcmp(field, 'sens_forw'))
				obj.sens_forw = value;
				obj.opts_struct.sens_forw = value;
			elseif (strcmp(field, 'sens_adj'))
				obj.sens_adj = value;
				obj.opts_struct.sens_adj = value;
			elseif (strcmp(field, 'sens_hess'))
				obj.sens_hess = value;
				obj.opts_struct.sens_hess = value;
			else
				disp(['acados_sim_opts: set: wrong field: ', field]);
			end
		end


	end % methods



end % class