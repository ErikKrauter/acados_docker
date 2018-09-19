#!/bin/bash

if [ "${SECTION}" = 'install' ]; then
	source "${SCRIPT_DIR}/install_apt_dependencies.sh";
	source "${SCRIPT_DIR}/install_python_dependencies.sh";
	source "${SHARED_SCRIPT_DIR}/install_eigen.sh";
	source "${SCRIPT_DIR}/install_casadi.sh";
	source "${SHARED_SCRIPT_DIR}/install_swig.sh";

elif [ "${SECTION}" = 'script' ]; then
	source "${SHARED_SCRIPT_DIR}/script_acados_release.sh";

elif [ "${SECTION}" = 'after_success' ]; then
	source "${SHARED_SCRIPT_DIR}/after_success_package_release.sh";
	source "${SHARED_SCRIPT_DIR}/upload_coverage.sh";

fi
