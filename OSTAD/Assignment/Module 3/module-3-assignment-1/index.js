class ToDoList {
    constructor() {
        this.tasks = [];
    }

    // Method to add a task (Student needs to implement)
    addTask(title) {
        this.tasks.push({ title:title, status: 'pending' });
    }

    // Method to delete a task by index (Student needs to implement)
    deleteTask(index) {
        if (index>=0 && index<this.tasks.length) { this.tasks.splice(index, 1) };
    }

    // Method to mark a task as done (Student needs to implement)
    markTaskDone(index) {
        if (index >= 0 && index < this.tasks.length) { this.tasks[index].status = 'done'; }
    }

    // Method to view all tasks (Student needs to implement)
    viewTasks() {
        return this.tasks;
    }
}

//-----------------------------------------

// ! Warning

// Don't change anything below 
// If you change anything in this portion, your marks will be cut
// Unit tests

function runTests() {
    const list = new ToDoList();

    console.log("Test 1: Add tasks");
    list.addTask("Task 1");
    list.addTask("Task 2");
    console.assert(list.tasks.length === 2, "Failed to add tasks");

    console.log("Test 2: Mark task as done");
    list.markTaskDone(0);
    console.assert(list.tasks[0].status === 'done', "Failed to mark task as done");

    console.log("Test 3: Delete task");
    list.deleteTask(1);
    console.assert(list.tasks.length === 1, "Failed to delete task");

    console.log("Test 4: View tasks");
    const tasks = list.viewTasks();
    console.assert(tasks.length === 1 && tasks[0].title === "Task 1", "Failed to view tasks");

    console.log("All tests passed!");
}

runTests();